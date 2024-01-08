#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int NumCities = 10;
const int MaxCityLength = 100;

bool CompareStrings(const char* a, const char* b) {
    return strcmp(a, b) < 0;
}

int main() {
    char Cities[NumCities][MaxCityLength];
    char temp[MaxCityLength];

    cout << "Enter 10 city names:\n";

    for (int i = 0; i < NumCities; ++i) {
        cout << "City " << i + 1 << ": ";
        cin.getline(temp, MaxCityLength);
        strcpy(Cities[i], temp);
    }

    sort(Cities, Cities + NumCities, CompareStrings);

    cout << "\nSorted City Names:\n";

    for (int i = 0; i < NumCities; ++i) {
        cout << Cities[i] << endl;
    }

    return 0;
}
