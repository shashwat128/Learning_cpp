#include <iostream>
using namespace std;

int check_prime(int);

int main()
{
    int num1, num2;

    bool flag;

    cout << "Enter two positive number: ";
    cin >> num1 >> num2;

    if (num1 > num2)
    {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    cout << "Prime numbers between " << num1 << " and " << num2 << " : ";

    for (int i = num1 + 1; i < num2; ++i)
    {
        flag = check_prime(i);

        if (flag)
        {
            cout << i << ", ";
        }
    }
    return 0;
}

int check_prime(int num)
{
    bool is_prime = true;

    if (num == 0 || num == 1)
    {
        is_prime = false;
    }

    for (int j = 2; j <= num / 2; ++j)
    {
        if (num % j == 0)
        {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}