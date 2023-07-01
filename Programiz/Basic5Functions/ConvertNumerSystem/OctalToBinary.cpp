#include <iostream>
#include <cmath>
using namespace std;

long long octalToBinary(int);

int main()
{
    int octalNumber;

    cout << "Enter an octal number: ";
    cin >> octalNumber;

    cout << octalNumber << " in octal = " << octalToBinary(octalNumber) << " in binary";

    return 0;
}

long long octalToBinary(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    long long binaryNumber = 0;

    while (octalNumber != 0)
    {
        decimalNumber = decimalNumber + (octalNumber % 10) * pow(8, i);
        ++i;
        octalNumber = octalNumber / 10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        binaryNumber = binaryNumber + (decimalNumber % 2) * i;
        decimalNumber = decimalNumber / 2;
        i = i * 10;
    }

    return binaryNumber;
}