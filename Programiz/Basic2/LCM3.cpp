#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int num1 = 23, num2 = 11;

    int result = lcm(num1, num2);

    cout << "The lcm of " << num2 << " and " << num1 << " is: " << result;
}