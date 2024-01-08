#include <iostream>
#include <cstring>

class MyString {
private:
    char* str;

public:
    MyString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    ~MyString() {
        delete[] str;
    }

    void display() const {
        std::cout << "String: " << str << std::endl;
    }
};

int main() {
    MyString myString("Hello, World!");
    myString.display();
    return 0;
}
