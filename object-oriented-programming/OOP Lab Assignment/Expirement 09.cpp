//Write a C++ program to create two classes each consist of a number and member functions for 
//input & output. Compute and print the maximum between the two private data members by 
//using friend function.








#include <iostream>

class NumberClass; // Forward declaration

class MaxFinder {
public:
    static int findMax(const NumberClass& num1, const NumberClass& num2);
};

class NumberClass {
private:
    int number;

public:
    void inputNumber() {
        std::cout << "Enter a number: ";
        std::cin >> number;
    }

    void outputNumber() const {
        std::cout << "Number: " << number << std::endl;
    }

    friend int MaxFinder::findMax(const NumberClass& num1, const NumberClass& num2);
};

int MaxFinder::findMax(const NumberClass& num1, const NumberClass& num2) {
    return (num1.number > num2.number) ? num1.number : num2.number;
}

int main() {
    NumberClass num1, num2;

    // Input for first number
    std::cout << "For the first number:\n";
    num1.inputNumber();

    // Input for second number
    std::cout << "\nFor the second number:\n";
    num2.inputNumber();

    std::cout << "\nEntered numbers:\n";
    num1.outputNumber();
    num2.outputNumber();

    // Finding and printing the maximum
    int max = MaxFinder::findMax(num1, num2);
    std::cout << "\nMaximum between the two numbers: " << max << std::endl;

    return 0;
}
