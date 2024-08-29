#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0;

    cout << "Enter a number: ";
    cin >> number;

    // If the number is negative, store its sign and make it positive for reversing
    int sign = (number < 0) ? -1 : 1;
    number = abs(number);  // Make the number positive

    // Reverse the number using a loop
    while (number > 0) {
        int digit = number % 10;             // Extract the last digit
        reversedNumber = reversedNumber * 10 + digit; // Append the digit to the reversed number
        number /= 10;                        // Remove the last digit
    }

    // Restore the sign of the reversed number
    reversedNumber *= sign;

    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}
