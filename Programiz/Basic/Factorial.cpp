#include <iostream>
using namespace std;

int main()
{
    int num;

    long factorial = 1.0;

    cout << "Enter a small positive number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "negativity detected, result rejected.";
    }
    else
    {
        while (num > 0)
        {
            factorial = factorial * num;
            num--;
        }
        cout << "Factorial: " << factorial;
    }

    return 0;
}
