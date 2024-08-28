#include <iostream>

// Рекурсивная функция для вычисления n-го числа Фибоначчи
unsigned long long fibonacci(int n) {
    if (n <= 0) {return 0;} 
    else if (n == 1) {return 1;} 
    else {return fibonacci(n - 1) + fibonacci(n - 2);} //сын == дед+отец
}

// Функция для вывода ряда Фибоначчи
void printFibonacciSeries(int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << fibonacci(i) << " "; //да
    }
    std::cout << std::endl;
}

int main() {
    int N;

    std::cout << "Введите количество элементов в ряде Фибоначчи: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Количество элементов должно быть положительным числом." << std::endl;
        return 1;
    }

    // Вывод ряда Фибоначчи
    std::cout << "Ряд Фибоначчи из " << N << " элементов: ";
    printFibonacciSeries(N);

    return 0;
}
