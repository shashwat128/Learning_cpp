#include <iostream>
using namespace std;

// fibonacci series upto input
// upto 10000 - 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765.

int main()
{
    int num1, num2, nextNum, num;

    num1 = 0;
    num2 = 1;

    cout << "Enter a positive number: ";
    cin >> num;

    cout << "Fibonacci series upto " << num << " is: " << num1 << ", " << num2 << ", ";

    nextNum = num1 + num2;

    while (nextNum <= num)
    {
        cout << nextNum << ", ";

        num1 = num2;
        num2 = nextNum;
        nextNum = num1 + num2;
    }

    return 0;
}