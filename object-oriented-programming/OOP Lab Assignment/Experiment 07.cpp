#include <iostream>

class Point {
private:
    int x, y;

public:
    Point() : x(0), y(0) {}  // Default constructor
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}  // Parameterized constructor
    Point(const Point &other) : x(other.x), y(other.y) {}  // Copy constructor
    void display();

};

void Point::display() {
    std::cout << "X: " << x << ", Y: " << y << std::endl;
}

int main() {
    Point point1;

    std::cout << "Default Constructor\n";
    point1.display();

    Point point2(3, 5);

    std::cout << "Parameterized Constructor\n";
    point2.display();

    Point point3 = point2;

    std::cout << "Copy Constructor\n";
    point3.display();

    return 0;
}
