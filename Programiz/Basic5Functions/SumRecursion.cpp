#include <iostream>
using namespace std;

int add(int num);

int main()
{
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    cout << "Sum = " << add(num);

    return 0;
}

int add(int num)
{
    if (num != 0)

    {
        return num + add(num - 1);
    }

    return 0;
}