#include <iostream>
using namespace std;

// using recursion

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int term;

    cout << "Enter the number of terms: ";
    cin >> term;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < term; i++)
    {
        cout << fibonacci(i) << ", ";
    }

    return 0;
}
