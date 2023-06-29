#include <iostream>
using namespace std;

int factorial(int num);

int main()
{
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    cout << "Factorial of " << num << " = " << factorial(num);

    return 0;
}

int factorial(int num)
{
    if (num > 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }
}