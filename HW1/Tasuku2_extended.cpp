//We can get oef from 185
//We can get 69963 from twtweesnnsth !!!!
//the biggest problem is that colonialists gave 2 the two and 3 the three so you can't just get your face in the bushes and have a pleasent experience you need to resolve ambiguities 
// apparently it wasn't that hard


#include <iostream>
#include <string>

// Define a structure to hold digit and its name
struct DigitInfo {
    char digit;
    std::string name;
};

// Function to find the digit corresponding to the syllable
char findDigitBySyllable(const std::string& syllable, const DigitInfo* digits, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        if (digits[i].name.substr(0, syllable.length()) == syllable) {
            return digits[i].digit;
        }
    }
    return '?'; // Return '?' if syllable not found
}

// Function to resolve syllables, considering ambiguities
char resolveSyllable(const std::string& syllables, size_t& index, const DigitInfo* digits, size_t size) {
    if (index >= syllables.length()) {
        return '?'; // Out of bounds
    }

    // Check for a two-letter syllable if the current one is 't'
    if (index + 1 < syllables.length()) {
        std::string twoLetterSyllable = syllables.substr(index, 2);
        char digit = findDigitBySyllable(twoLetterSyllable, digits, size);
        if (digit != '?') {
            index += 2; // Skip the next character if valid
            return digit;
        }
    }

    // Try single letter syllable
    std::string singleLetterSyllable = syllables.substr(index, 1);
    char digit = findDigitBySyllable(singleLetterSyllable, digits, size);
    
    if (digit != '?') {
        index += 1; // Valid single letter syllable
        return digit;
    }

    // If no valid syllable found, return invalid
    return '?';
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

    std::cout << "Choose an option:" << std::endl;
    std::cout << "1: Extract syllables from digits" << std::endl;
    std::cout << "2: Deconstruct syllables into digits" << std::endl;
    int choice;
    std::cin >> choice;

    if (choice == 2) {
        // Mode 2: Deconstruct syllables
        std::string input;
        std::cout << "Enter a sequence of syllables: ";
        std::cin >> input;

        std::string result;
        size_t index = 0;
        bool valid = true;

        while (index < input.length()) {
            char digit = resolveSyllable(input, index, digits, sizeof(digits) / sizeof(digits[0]));
            if (digit == '?') {
                std::cout << "Invalid syllable sequence" << std::endl;
                valid = false;
                break;
            }
            result += digit;
        }

        if (valid) {
            std::cout << "Deconstructed number: " << result << std::endl;
        }

    } else {
        std::cout << "Invalid choice. Please select option 1 or 2." << std::endl;
    }

    return 0;
}
