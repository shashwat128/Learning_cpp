#include <iostream>
using namespace std;

bool check_prime(int num);

int main()
{
    int num, i;
    bool flag = false;

    cout << "Enter a positive integer: ";
    cin >> num;

    for (i = 2; i <= num / 2; ++i)
    {
        if (check_prime(i))
        {
            if (check_prime(num - i))
            {
                cout << num << " = " << i << " + " << num - i << endl;
                flag = true;
            }
        }
    }

    if (!flag)
    {
        cout << num << " can't be expressed as the sum of two primes.";
    }

    return 0;
}

bool check_prime(int num)
{
    int i;
    bool is_prime = true;

    if (num == 0 || num == 1)
    {
        is_prime = false;
    }

    for (i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}