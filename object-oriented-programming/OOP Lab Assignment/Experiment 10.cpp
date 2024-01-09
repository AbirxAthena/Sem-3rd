//Write a C++ program to create a class "count" consist of a number(static int), 
//the number shows on what number the object is created (Use default constructor) and also count the total number of 
//objects created in the program using static member function. 






#include <iostream>

class Count {
private:
    static int totalCount; // Static member to count total objects
    int objectNumber;      // Instance member to store the object number

public:
    Count() {
        totalCount++;        // Increment the total count for each object created
        objectNumber = totalCount; // Assign the object number
    }

    static int getTotalCount() {
        return totalCount;
    }

    void display() const {
        std::cout << "Object " << objectNumber << std::endl;
    }
};

// Initializing the static member
int Count::totalCount = 0;

int main() {
    // Creating objects of Count class
    Count obj1;
    Count obj2;
    Count obj3;

    // Displaying the object numbers
    std::cout << "Object details:\n";
    obj1.display();
    obj2.display();
    obj3.display();

    // Displaying the total number of objects created
    std::cout << "\nTotal number of objects created: " << Count::getTotalCount() << std::endl;

    return 0;
}



// Output:
// Object details:
// Object 1
// Object 2
// Object 3

// Total number of objects created: 3
