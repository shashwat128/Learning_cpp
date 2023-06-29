#include <iostream>
using namespace std;

int hcf(int num1, int num2);

int main()
{
    int num1, num2;

    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    cout << "H.C.F. of " << num1 << " & " << num2 << " is; " << hcf(num1, num2);

    return 0;
}

int hcf(int num1, int num2)
{
    if (num2 != 0)
    {
        return hcf(num2, num1 % num2);
    }
    else
    {
        return num1;
    }
}