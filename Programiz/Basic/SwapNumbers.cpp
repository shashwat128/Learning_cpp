#include <iostream>
using namespace std;

int main()
{
    int num1 = 3, num2 = 5, temp;

    cout << "Before swapping: " << endl;
    cout << "Number 1 = " << num1 << ", Number 2 = " << num2 << endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping: " << endl;

    cout << "Number 1 = " << num1 << ", Number 2 = " << num2 << endl;

    return 0;
}