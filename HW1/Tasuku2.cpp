#include <iostream>

int main() {
    char digit;
    std::cout << "Enter a hexadecimal digit (0-9, A-F, a-f): ";
    std::cin >> digit;

    switch (digit) {
        case '0':
            std::cout << "The first syllable of the digit 0 is: z" << std::endl;  // zero
            break;
        case '1':
            std::cout << "The first syllable of the digit 1 is: o" << std::endl;  // one
            break;
        case '2':
            std::cout << "The first syllable of the digit 2 is: t" << std::endl;  // two
            break;
        case '3':
            std::cout << "The first syllable of the digit 3 is: t" << std::endl;  // three
            break;
        case '4':
            std::cout << "The first syllable of the digit 4 is: f" << std::endl;  // four
            break;
        case '5':
            std::cout << "The first syllable of the digit 5 is: f" << std::endl;  // five
            break;
        case '6':
            std::cout << "The first syllable of the digit 6 is: s" << std::endl;  // six
            break;
        case '7':
            std::cout << "The first syllable of the digit 7 is: s" << std::endl;  // seven
            break;
        case '8':
            std::cout << "The first syllable of the digit 8 is: e" << std::endl;  // eight
            break;
        case '9':
            std::cout << "The first syllable of the digit 9 is: n" << std::endl;  // nine
            break;
        case 'A': case 'a':
            std::cout << "The first syllable of the digit A/a is: a" << std::endl;  // A or a
            break;
        case 'B': case 'b':
            std::cout << "The first syllable of the digit B/b is: b" << std::endl;  // B or b
            break;
        case 'C': case 'c':
            std::cout << "The first syllable of the digit C/c is: c" << std::endl;  // C or c
            break;
        case 'D': case 'd':
            std::cout << "The first syllable of the digit D/d is: d" << std::endl;  // D or d
            break;
        case 'E': case 'e':
            std::cout << "The first syllable of the digit E/e is: e" << std::endl;  // E or e
            break;
        case 'F': case 'f':
            std::cout << "The first syllable of the digit F/f is: f" << std::endl;  // F or f
            break;
        default:
            std::cout << "Invalid input. Please enter a hexadecimal digit (0-9, A-F, a-f)." << std::endl;
            break;
    }

    return 0;
}
