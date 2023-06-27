#include <iostream>
using namespace std;

int main()
{
    int exponent;
    float base, result = 1;

    cout << "Enter the base(can be decimal): ";
    cin >> base;

    cout << "Enter the exponent(only integer): ";
    cin >> exponent;

    cout << base << "^" << exponent << " = ";

    if (exponent < 0)
    {
        while (exponent != 0)
        {
            result = result / base;
            ++exponent;
        }
    }
    else if (exponent > 0)
    {
        for (int i = exponent; i >= 0; i--)
        {
            result = result * base;
        }
    }
    else
    {
        return result = 1;
    }

    cout << result;
}