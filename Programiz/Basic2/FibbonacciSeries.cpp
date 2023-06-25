#include <iostream>
using namespace std;

int main()
{
    int num, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter a number upto which you want to find the fibonacci series: ";
    cin >> num;

    cout << "Fibonacci series: ";

    for (int i = 1; i <= num; ++i)
    {
        if (i == 1)
        {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2)
        {
            cout << t2 << ", ";
            continue;
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << ", ";
    }

    return 0;
}