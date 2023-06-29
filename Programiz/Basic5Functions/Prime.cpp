#include <iostream>

using namespace std;

bool check_prime(int);

int main()
{
    int num;

    cout << "Enter a positive number you want to check: ";
    cin >> num;

    if (check_prime(num))
    {
        cout << num << " is a Prime number.";
    }
    else
    {
        cout << num << " is not a Prime number.";
    }
    return 0;
}

bool check_prime(int num)
{
    bool is_prime = true;

    if (num == 0 || num == 1)
    {
        is_prime = false;
    }

    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}