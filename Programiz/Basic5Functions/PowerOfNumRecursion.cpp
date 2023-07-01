#include <iostream>
using namespace std;

float calculatePower(int, int);

int main()
{
    int base, powerRaised;
    float result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter the power: ";
    cin >> powerRaised;

    result = calculatePower(base, powerRaised);
    cout << base << "^" << powerRaised << " = " << result;

    return 0;
}

float calculatePower(int base, int powerRaised)
{
    if (powerRaised != 0)
    {
        if (powerRaised > 0)
        {
            return (base * calculatePower(base, powerRaised - 1));
        }
        else
        {
            powerRaised = powerRaised * (-1);
            return (1 / (base * calculatePower(base, powerRaised - 1)));
        }
    }
    else
        return 1;
}