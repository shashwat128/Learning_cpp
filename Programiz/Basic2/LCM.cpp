#include <iostream>
using namespace std;

int main()
{
    int num1 = 13;
    int num2 = 17;
    int max;

    cout << "LCM of " << num1 << " and " << num2 << " is ";

    max = (num1 > num2) ? num1 : num2;

    do
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            cout << max;
            break;
        }
        else
        {
            ++max;
        }
    } while (true);

    return 0;
}