#include <iostream>
#include <string>

using namespace std;

int calculateNumber(const string& str) {
    int base = 5; // Number of letters in the alphabet
    int result = 0;
    
    for (char c : str) {
        result = result * base + (c - 'A' + 1);
    } 
    return result;
}

int main() {
    string input;
    cin >> input;
    
    int number = calculateNumber(input);
    cout<<number;
    
    return 0;
}
