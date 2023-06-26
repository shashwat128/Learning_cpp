#include <iostream>
using namespace std;

int main()
{
    int num = 12345, reversed = 0, remainder;

    cout << "The reverse of the number " << num << " is: ";

    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    cout << reversed;

    return 0;
}