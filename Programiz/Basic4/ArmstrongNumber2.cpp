#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrongNumber(int num)
{
    int originalNum = num;
    int n = 0;

    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    return sum == originalNum;
}

int main()
{
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (isArmstrongNumber(num))
    {
        cout << num << " is an Armstrong number.";
    }
    else
    {
        cout << num << " is not an Armstrong number.";
    }

    return 0;
}
