#include <iostream>
using namespace std;

int main()
{
    int num1, num2, hcf;

    num1 = 41;
    num2 = 1681;

    if (num2 > num1)
    {
        int temp = num2;
        num2 = num1;
        num1 = temp;
    }

    for (int i = 1; i <= num2; ++i)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }

    cout << "HCF = " << hcf;

    return 0;
}