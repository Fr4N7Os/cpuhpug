#include <iostream>
#include <string>

// Define a structure to hold digit and its name
struct DigitInfo {
    char digit;
    std::string name;
};

// Function to extract the first syllable (first letter) from the name
char extractFirstSyllable(const DigitInfo& digitInfo) {
    if (!digitInfo.name.empty()) {
        return digitInfo.name[0];
    }
    return '?'; // Return '?' if the name is empty
}

int main() {
    // Create an array of DigitInfo
    DigitInfo digits[] = {
        {'0', "zero"},
        {'1', "one"},
        {'2', "two"},
        {'3', "three"},
        {'4', "four"},
        {'5', "five"},
        {'6', "six"},
        {'7', "seven"},
        {'8', "eight"},
        {'9', "nine"}
    };

    char digit;
    std::cout << "Willkommen! Enter a digit (0-9): ";
    std::cin >> digit;

    bool found = false;

    // Find the corresponding DigitInfo and extract the first syllable
    for (int i = 0; i < sizeof(digits) / sizeof(digits[0]); ++i) {
        if (digits[i].digit == digit) {
            char syllable = extractFirstSyllable(digits[i]);
            std::cout << "The first syllable of the digit " << digit << " is: " << syllable << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Invalid input. Please enter a digit between 0 and 9." << std::endl;
    }

    return 0;
}
