//WAP to create two base classes each consist of a integer number and create an another 
//class that consist of a integer number that stores the multiplication of the two numbers 
//inherited from the base classes. Each class consist of member functions for input and 
//output. 





#include <iostream>

// Base class 1
class Base1 {
protected:
    int number1;

public:
    void inputNumber1() {
        std::cout << "Enter the first number: ";
        std::cin >> number1;
    }

    void displayNumber1() const {
        std::cout << "Number 1: " << number1 << std::endl;
    }
};

// Base class 2
class Base2 {
protected:
    int number2;

public:
    void inputNumber2() {
        std::cout << "Enter the second number: ";
        std::cin >> number2;
    }

    void displayNumber2() const {
        std::cout << "Number 2: " << number2 << std::endl;
    }
};

// Derived class
class Multiply : public Base1, public Base2 {
private:
    int result; // To store the multiplication result

public:
    void calculateProduct() {
        result = number1 * number2;
    }

    void displayResult() const {
        std::cout << "Multiplication Result: " << result << std::endl;
    }
};

int main() {
    Multiply multiplication;

    // Input numbers from Base1 and Base2
    multiplication.inputNumber1();
    multiplication.inputNumber2();

    // Calculate multiplication result
    multiplication.calculateProduct();

    // Display input numbers and result
    std::cout << "\nInput Numbers:\n";
    multiplication.displayNumber1();
    multiplication.displayNumber2();

    std::cout << "\nMultiplication Result:\n";
    multiplication.displayResult();

    return 0;
}
