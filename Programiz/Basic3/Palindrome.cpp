#include <iostream>
using namespace std;

int main()
{
    int num, digit, n, rev = 0;

    cout << "Enter a positive number: ";
    cin >> num;

    n = num;

    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    cout << "The reverse of the number is: " << rev << endl;

    if (n == rev)
        cout << "The number " << n << " is a palindrome.";
    else
        cout << "The number " << n << " is not a palindrome.";
    return 0;
}