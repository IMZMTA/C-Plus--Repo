#include <iostream>
#include <ctime>
#include <cstdlib>

// Function to generate OTP
int generateOTP() {
    srand(time(0));  // Seed the random number generator with current time
    int otp = rand() % 10000;  // Generate a random 4-digit OTP
    return otp;
}

// Function to verify OTP
bool verifyOTP(int otp, int userEnteredOTP) {
    return otp == userEnteredOTP;
}

int main() {
    int otp = generateOTP();  // Generate OTP

    std::cout << "OTP generated: " << otp << std::endl;

    int userEnteredOTP;
    std::cout << "Enter the OTP: ";
    std::cin >> userEnteredOTP;

    if (verifyOTP(otp, userEnteredOTP)) {
        std::cout << "OTP is correct. Verification successful!" << std::endl;
    } else {
        std::cout << "OTP is incorrect. Verification failed!" << std::endl;
    }

    return 0;
}
