#include <iostream>
//welcome to an overly-excited version of completing the given task
//Just run it, enough of looking at booooring stuff
//F* optimising you don't need to know brioche to bake cookies


void returnToMenu();

void showValues() {
    std::cout << "For char: -128 to 127 (inclusive)" << std::endl;
    std::cout << "For double: -1.7976931348623157e+308 to 1.7976931348623157e+308 (inclusive)" << std::endl;
    returnToMenu();
}

void demonstrateOverflow() {
    // Demonstrate char overflow
    char c = 127; // Maximum value for char
    std::cout << "Initial char value: " << (c + 0) << std::endl; // Implicitly converts to int
    c++; // Causes overflow
    std::cout << "After adding 1: " << (c + 0) << std::endl; // Displays as -128 after overflow

    // Demonstrate double overflow
    double d = 1.7e308; // Close to maximum value
    std::cout << "Initial double value: " << d << std::endl;
    d *= 2; // Causes overflow
    std::cout << "After multiplying this enormous boy by 2: " << d << std::endl; // Becomes inf

    returnToMenu();
}

void duolingo() {
    int score = 0;
    int answer;

    std::cout << "\nAnswer whether the equation causes an overflow. (1 for Yes, 0 for No)" << std::endl;

    // Array of questions and answers
    struct Question {
        std::string text;
        int correctAnswer;
    };

    Question questions[] = {
        {"(char)127 + 1 will overflow? ", 1},
        {"(char)-128 - 1 will overflow? ", 1},
        {"(char)50 + 50 will overflow? ", 0},
        {"(double)1.7e308 * 10 will overflow? ", 1},
        {"(double)1.0e307 * 2 will overflow? ", 0},
        {"(double)-1.7e308 * 0.1 will overflow? ", 0}
    };

    // Number of questions
    int numQuestions = sizeof(questions) / sizeof(questions[0]);

    for (int i = 0; i < numQuestions; ++i) {
        std::cout << questions[i].text;
        std::cin >> answer;
        if (answer == questions[i].correctAnswer) {
            std::cout << "Correct!" << std::endl;
            ++score;
        } else {
            std::cout << "Incorrect. The correct answer was " << questions[i].correctAnswer << "." << std::endl;
        }
    }

    // Final score and feedback
    std::cout << "\nYour final score is " << score << " out of " << numQuestions << "." << std::endl;
    if (score == numQuestions) {
        std::cout << "Perfect score! You're a pro at understanding overflow!" << std::endl;
    } 
    else if (score == 0) { std::cout << "skill issue he-HA-ha-HA" << std::endl; }
    else {
        std::cout << "Good try! Keep practicing to master overflow!" << std::endl;
    }

    returnToMenu();
}

void returnToMenu() {
    int returnToMenu;
    std::cout << "\nDo you want to return to the main menu? (1 for Yes, 0 for No): ";
    std::cin >> returnToMenu;
    while (returnToMenu != 1 && returnToMenu != 0) {
        std::cout << "Invalid input. Please enter 1 for Yes or 0 for No: ";
        std::cin >> returnToMenu;
    }
    if (returnToMenu == 0) {
        exit(0); // KIS if user chooses not to go back
    }
}

int main() {
    char choice;
    std::cout << "\nOh, hi! What do you want?" << std::endl;
    do {
      //we need da loop to keep you engaged
        std::cout << "0| What are the possible values of char and double" << std::endl;
        std::cout << "1| Examples of overflow" << std::endl;
        std::cout << "2| Is it JOEVERflow or not (answer with 1 or 0 respectively)" << std::endl;
        std::cout << "3| Exit" << std::endl;
        std::cin >> choice;

        switch (choice) {
            case '0':
                showValues();
                break;
            case '1':
                demonstrateOverflow();
                break;
            case '2':
                duolingo();
                break;
            case '3': // Not hehe-haha case
                std::cout << "Exiting..." << std::endl;
                break;
            default:
              //catch-all else, literally like else
                std::cout << "DO NOT TEST ME, I didn't have enough points to create smth for this input, baka" << std::endl;
                break;
        }
    } while (choice != '3'); 
  
    return 0;
}

//hold your applauses, other works are going to be blunt, unless...
