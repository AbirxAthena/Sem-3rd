#include <iostream>

using namespace std;

class Item {
private:
    char name[30];
    int price;
    int code;

public:
    void getItem();  // Corrected function declaration
    void printItem();  // Corrected function declaration
};

void Item::getItem() {
    cout << "Item Name: ";
    cin.ignore();  // Corrected usage of cin.ignore
    cin.getline(name, 30);
    cout << "Price: ";
    cin >> price;
    cout << "Code: ";
    cin >> code;
}

void Item::printItem() {
    cout << "Name: " << name << "\n";
    cout << "Price: " << price << "\n";
    cout << "Code: " << code << "\n";
}

const int size = 3;

int main() {
    Item items[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter details for Item " << (i + 1) << ":\n";
        items[i].getItem();
    }

    cout << "\nItem Details:\n";

    for (int i = 0; i < size; i++) {
        cout << "Item " << (i + 1) << ":\n";
        items[i].printItem();
        cout << "\n";
    }

    return 0;
}
