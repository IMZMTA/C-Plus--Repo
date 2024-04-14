#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <chrono>
#include <cmath>
#include <openssl/hmac.h>
#include <openssl/sha.h>

// Function to generate the HMAC-SHA1 hash
std::string generateHmacSha1(const std::string& key, const std::string& data) {
    unsigned char result[SHA_DIGEST_LENGTH];
    HMAC_CTX ctx;
    HMAC_CTX_init(&ctx);
    HMAC_Init_ex(&ctx, key.c_str(), key.length(), EVP_sha1(), NULL);
    HMAC_Update(&ctx, reinterpret_cast<const unsigned char*>(data.c_str()), data.length());
    unsigned int len;
    HMAC_Final(&ctx, result, &len);
    HMAC_CTX_cleanup(&ctx);
    
    std::stringstream ss;
    ss << std::hex << std::setfill('0');
    for (unsigned int i = 0; i < len; ++i)
        ss << std::setw(2) << static_cast<unsigned int>(result[i]);

    return ss.str();
}

// Function to generate the TOTP
std::string generateOTP(const std::string& key, const std::time_t& timestamp, int timeStep, int digits) {
    // Calculate the counter value based on the timestamp and time step
    long counter = static_cast<long>(timestamp / timeStep);

    // Convert the counter to a big-endian byte array
    unsigned char counterBytes[8];
    for (int i = 7; i >= 0; --i) {
        counterBytes[i] = counter & 0xFF;
        counter >>= 8;
    }

    // Generate the HMAC-SHA1 hash using the key and counter
    std::string hmac = generateHmacSha1(key, std::string(reinterpret_cast<char*>(counterBytes), 8));

    // Extract the offset bits from the HMAC-SHA1 hash
    int offset = hmac[hmac.length() - 1] & 0x0F;
    int binary =
        (hmac[offset + 0] & 0x7F) << 24 |
        (hmac[offset + 1] & 0xFF) << 16 |
        (hmac[offset + 2] & 0xFF) << 8 |
        (hmac[offset + 3] & 0xFF);

    // Generate the OTP by performing modulo 10^digits
    std::string otp;
    for (int i = 0; i < digits; ++i) {
        otp = static_cast<char>('0' + (binary % 10)) + otp;
        binary /= 10;
    }

    return otp;
}

int main() {
    // Secret key shared between the server and client
    std::string secretKey = "YourSecretKey";

    // Generate the OTP for the current time
    std::time_t currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::string otp = generateOTP(secretKey, currentTime, 30, 6);

    std::cout << "Generated OTP: " << otp << std::endl;

    // Verify the OTP entered by the user
    std::string userInput;
    std::cout << "Enter OTP to verify: ";
    std::cin >> userInput;

    std::string generatedOTP = generateOTP(secretKey, currentTime, 30, 6);
    if (userInput == generatedOTP) {
        std::cout << "OTP is valid." << std::endl;
    } else {
        std::cout << "Invalid OTP." << std::endl;
    }

    return 0;
}
