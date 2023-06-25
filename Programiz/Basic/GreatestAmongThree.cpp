#include <iostream>
using namespace std;
int main()
{
    double num1 = 224423, num2 = 45353, num3 = 455345;

    cout << "The comparison is between: " << num1 << ", " << num2 << ", " << num3 << endl;

    if (num1 > num2 && num1 < num3)
    {
        cout << num3 << " is larger.";
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << num2 << " is greater.";
    }
    else
    {
        cout << num1 << " is greater";
    }
}