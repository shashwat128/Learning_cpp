#include <iostream>
#include <cmath>
using namespace std;

long long convert(int);

int main()
{
    int num, bin;
    cout << "Enter a decimal number: ";
    cin >> num;

    bin = convert(num);
    cout << num << " in decimal = " << bin << " in binary" << endl;

    return 0;
}

long long convert(int num)
{
    long long bin = 0;
    int rem, i = 1;

    while (num != 0)
    {
        rem = num % 2;
        num /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}