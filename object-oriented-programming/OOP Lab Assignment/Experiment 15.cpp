//WAP to create a class “shape” consist of name and sides and a constructor. The class is 
//inherited by “triangle” and “square” classes each consist of required data members to 
//compute its area and a constructor and member functions to compute the area and to 
//display the details of the shape. 





#include <iostream>
#include <cmath>

class Shape {
protected:
    std::string name;
    int sides;

public:
    // Constructor
    Shape(const std::string& shapeName, int shapeSides) : name(shapeName), sides(shapeSides) {}

    // Function to compute area (pure virtual function, to be overridden by derived classes)
    virtual double computeArea() const = 0;

    // Function to display shape details
    void displayDetails() const {
        std::cout << "Shape: " << name << std::endl;
        std::cout << "Number of sides: " << sides << std::endl;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    // Constructor
    Triangle() : Shape("Triangle", 3) {
        std::cout << "Enter base length of the triangle: ";
        std::cin >> base;
        std::cout << "Enter height of the triangle: ";
        std::cin >> height;
    }

    // Function to compute area
    double computeArea() const override {
        return 0.5 * base * height;
    }

    // Function to display triangle details
    void displayTriangleDetails() const {
        displayDetails();
        std::cout << "Base length: " << base << std::endl;
        std::cout << "Height: " << height << std::endl;
        std::cout << "Area: " << computeArea() << std::endl;
    }
};

class Square : public Shape {
private:
    double side;

public:
    // Constructor
    Square() : Shape("Square", 4) {
        std::cout << "Enter side length of the square: ";
        std::cin >> side;
    }

    // Function to compute area
    double computeArea() const override {
        return side * side;
    }

    // Function to display square details
    void displaySquareDetails() const {
        displayDetails();
        std::cout << "Side length: " << side << std::endl;
        std::cout << "Area: " << computeArea() << std::endl;
    }
};

int main() {
    Triangle triangle;
    Square square;

    std::cout << "\nTriangle Details:\n";
    triangle.displayTriangleDetails();

    std::cout << "\nSquare Details:\n";
    square.displaySquareDetails();

    return 0;
}
