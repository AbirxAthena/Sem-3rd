//WAP to create a class "student" consist of name and roll number. Create an another class 
//"test" consist of of marks of two subjects that inherits the "student" class. Create an 
//another class "result" consist of total that contains the sum of marks of the two subjects 
//and inherits the "test" class. Each class consist of member functions for input and output. 





#include <iostream>
#include <string>

class Student {
protected:
    std::string name;
    int rollNumber;

public:
    void inputStudentDetails() {
        std::cout << "Enter student name: ";
        std::getline(std::cin, name);
        std::cout << "Enter roll number: ";
        std::cin >> rollNumber;
        std::cin.ignore(); // Ignore the newline character in the input buffer
    }

    void displayStudentDetails() const {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

class Test : public Student {
protected:
    float subject1Marks;
    float subject2Marks;

public:
    void inputTestMarks() {
        std::cout << "Enter marks for Subject 1: ";
        std::cin >> subject1Marks;
        std::cout << "Enter marks for Subject 2: ";
        std::cin >> subject2Marks;
    }

    void displayTestMarks() const {
        std::cout << "Marks for Subject 1: " << subject1Marks << std::endl;
        std::cout << "Marks for Subject 2: " << subject2Marks << std::endl;
    }
};

class Result : public Test {
protected:
    float totalMarks;

public:
    void calculateTotalMarks() {
        totalMarks = subject1Marks + subject2Marks;
    }

    void displayResult() const {
        std::cout << "Total Marks: " << totalMarks << std::endl;
    }
};

int main() {
    Result studentResult;

    // Input student details
    studentResult.inputStudentDetails();

    // Input test marks
    studentResult.inputTestMarks();

    // Calculate and display results
    studentResult.calculateTotalMarks();

    std::cout << "\nStudent Details:\n";
    studentResult.displayStudentDetails();

    std::cout << "\nTest Marks:\n";
    studentResult.displayTestMarks();

    std::cout << "\nResult:\n";
    studentResult.displayResult();

    return 0;
}
