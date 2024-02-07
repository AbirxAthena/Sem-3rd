//write a c++ program to print date and take it's input while checking if it's valid

#include <iostream>

using namespace std;

bool isleapyear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

bool isvaliddate(int day, int month, int year)
{
    if (year < 0)
    return false;
    
    if (month < 1 && month > 12)
    return false;
    
    if (day < 1)
    return false;
    
    int maxdays = 31;
    if (month == 4 || month == 6 || month == 9 || month == 11)
    maxdays = 30;
    else if (month == 2) {
        maxdays = (isleapyear(year)) ? 29 : 28;
    }
    
    return (day <= maxdays);

}    
int main()
{   
    
    int day, month, year;
    
    cout << "Enter Date (dd mm yyyy):";
    cin >> day >> month >> year;
    
    if (isvaliddate(day, month, year))
    {
        cout << "Date is Valid :" << endl;
        cout << "Entered Date:" << day << "/" << month << "/" << year;
    }else{
        cout << "Date is Invalid" << endl;
        cout << "Enter Valid Date" << endl;
    }

    return 0;
}



// output :
// Enter Date (dd mm yyyy):29 02 2004
// Date is Valid :
// Entered Date:29/2/2004

// Enter Date (dd mm yyyy):15 02     29 02 2003
// Date is Invalid
// Enter Valid Date
