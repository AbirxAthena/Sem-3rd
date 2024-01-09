//WAP to create a base class "person" consist of name and age. Create derived classes 
//"teacher" consist of post and "student" consist of standard. Each class consist of member 
//functions for input and output.






#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    void inputPersonDetails() {
        std::cout << "Enter name: ";
        std::getline(std::cin, name);
        std::cout << "Enter age: ";
        std::cin >> age;
        std::cin.ignore(); // Ignore the newline character in the input buffer
    }

    void displayPersonDetails() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Teacher : public Person {
private:
    std::string post;

public:
    void inputTeacherDetails() {
        inputPersonDetails(); // Inherited function to input name and age
        std::cout << "Enter post: ";
        std::getline(std::cin, post);
    }

    void displayTeacherDetails() const {
        displayPersonDetails(); // Inherited function to display name and age
        std::cout << "Post: " << post << std::endl;
    }
};

class Student : public Person {
private:
    std::string standard;

public:
    void inputStudentDetails() {
        inputPersonDetails(); // Inherited function to input name and age
        std::cout << "Enter standard: ";
        std::getline(std::cin, standard);
    }

    void displayStudentDetails() const {
        displayPersonDetails(); // Inherited function to display name and age
        std::cout << "Standard: " << standard << std::endl;
    }
};

int main() {
    Teacher teacher;
    Student student;

    // Input teacher details
    std::cout << "Enter Teacher details:\n";
    teacher.inputTeacherDetails();

    // Input student details
    std::cout << "\nEnter Student details:\n";
    student.inputStudentDetails();

    // Display teacher details
    std::cout << "\nTeacher Details:\n";
    teacher.displayTeacherDetails();

    // Display student details
    std::cout << "\nStudent Details:\n";
    student.displayStudentDetails();

    return 0;
}



// Output:
// Enter Teacher details:
// Enter name: Anil
// Enter age: 39
// Enter post: ass. prof.

// Enter Student details:
// Enter name: Lakshay
// Enter age: 19
// Enter standard: 10

// Teacher Details:
// Name: Anil
// Age: 39
// Post: ass. prof.

// Student Details:
// Name: Lakshay
// Age: 19
// Standard: 10
