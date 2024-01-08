#include <iostream>

using namespace std;

void swap(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;

    cout << "Enter value of a & b respectively: ";
    cin >> a >> b;

    cout << endl << "Before swapping";
    cout << " a = " << a << " and b = " << b;

    swap(a, b);

    cout << endl << "After Swapping";
    cout << " a = " << a << " and b = " << b;

    return 0;
}
