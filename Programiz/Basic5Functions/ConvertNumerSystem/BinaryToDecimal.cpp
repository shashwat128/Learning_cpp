#include <iostream>
#include <cmath>
using namespace std;

int convert(long long);

int main()
{
    long long num;

    cout << "Enter a binary number: ";
    cin >> num;
    cout << num << " in binary = " << convert(num) << " in decimal.";

    return 0;
}

int convert(long long num)
{
    int dec = 0, i = 0, rem;

    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        dec += rem * pow(2, i);
        ++i;
    }

    return dec;
}