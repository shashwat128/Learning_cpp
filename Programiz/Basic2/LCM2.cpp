#include <iostream>
using namespace std;

int main()
{
    int num1 = 19, num2 = 95;
    int hcf, temp, lcm;

    cout << "The LCM of " << num1 << " and " << num2 << " will be: ";

    hcf = num1;
    temp = num2;

    while (hcf != temp)
    {
        if (hcf > temp)
        {
            hcf = hcf - temp;
        }
        else
        {
            temp = temp - hcf;
        }
    }
    lcm = (num1 * num2) / hcf;

    cout << lcm;

    return 0;
}