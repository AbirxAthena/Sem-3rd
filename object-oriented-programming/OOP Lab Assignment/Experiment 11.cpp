//Write a C++ program to create a class "data" consist of two integer numbers and create an another class 
//"maximum" that inherits the "data" class. Compute and print the maximum number 
//between the two inherited numbers






#include <iostream>

class Data {
protected:
    int number1;
    int number2;

public:
    void inputNumbers() {
        std::cout << "Enter the first number: ";
        std::cin >> number1;
        std::cout << "Enter the second number: ";
        std::cin >> number2;
    }

    void displayNumbers() const {
        std::cout << "Numbers: " << number1 << " and " << number2 << std::endl;
    }
};

class Maximum : public Data {
public:
    void findAndDisplayMaximum() const {
        int maxNumber = (number1 > number2) ? number1 : number2;
        std::cout << "Maximum number between the two inherited numbers: " << maxNumber << std::endl;
    }
};

int main() {
    Maximum obj;

    // Input numbers
    obj.inputNumbers();

    // Display inherited numbers
    std::cout << "\nEntered numbers:\n";
    obj.displayNumbers();

    // Find and display the maximum
    obj.findAndDisplayMaximum();

    return 0;
}



// Output:
// Enter the first number: 5
// Enter the second number: 9

// Entered numbers:
// Numbers: 5 and 9
// Maximum number between the two inherited numbers: 9
