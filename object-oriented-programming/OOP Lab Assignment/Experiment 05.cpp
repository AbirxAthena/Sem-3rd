#include <iostream>
#include <cstring>

using namespace std;

class Employee {
private:
    char name[50];
    int age;
    float salary;

public:
    void inputDetails(int serialNumber) {
        cout << "Enter details for employee " << serialNumber << ":\n";
        cout << "Name: ";
        cin.ignore();  // Ignoring newline character in the buffer
        cin.getline(name, 50);
        cout << "Age: ";
        cin >> age;
        cout << "Salary: ";
        cin >> salary;
        cin.ignore();  // Ignoring newline character in the buffer
    }

    void display(int serialNumber) const {
        cout << "Employee: " << serialNumber << "\n";
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Salary: " << salary << "\n\n";
    }
};

int main() {
    const int numFaculty = 5;
    const int numStaff = 4;

    Employee faculty[numFaculty];
    Employee staff[numStaff];

    for (int i = 0; i < numFaculty; ++i) {
        faculty[i].inputDetails(i + 1);
    }

    for (int i = 0; i < numStaff; ++i) {
        staff[i].inputDetails(i + 1);
    }

    cout << "\nFaculty Details:\n";
    for (int i = 0; i < numFaculty; ++i) {
        faculty[i].display(i + 1);
    }

    cout << "\nStaff Details:\n";
    for (int i = 0; i < numStaff; ++i) {
        staff[i].display(i + 1);
    }

    return 0;
}
