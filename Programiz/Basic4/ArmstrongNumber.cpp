#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, orignalNum, remainder, n = 0, result = 0, power;

    cout << "Enter an integer: ";
    cin >> num;

    orignalNum = num;

    while (orignalNum != 0)
    {
        orignalNum /= 10;
        ++n;
    }

    orignalNum = num;

    while (orignalNum != 0)
    {
        remainder = orignalNum % 10;

        power = round(pow(remainder, n));
        result += power;
        orignalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";
    return 0;
}
