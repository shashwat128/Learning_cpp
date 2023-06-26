#include <iostream>
using namespace std;

int main()
{
    int num1 = 144, num2 = 84;

    cout << "The HCF of " << num1 << " and " << num2;

    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 = num1 - num2;
        }
        else
        {
            num2 = num2 - num1;
        }
    }

    cout << " is: " << num1;

    return 0;
}