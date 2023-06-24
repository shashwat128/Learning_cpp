#include <iostream>
using namespace std;

int main()
{
    int number, divisor, quotient, remainder;

    cout << "Enter Number(dividend): ";
    cin >> number;

    cout << "Enter dividor: ";
    cin >> divisor;

    quotient = number / divisor;
    remainder = number % divisor;

    cout << "Quotien = " << quotient << endl;
    cout << "Remainder = " << remainder;

    return 0;
}