#include <iostream>
using namespace std;

int revNum(int num, int reverseNum = 0)
{
    if (num == 0)
    {
        return reverseNum;
    }

    reverseNum = (reverseNum * 10) + (num % 10);

    return revNum(num / 10, reverseNum);
}

int main()
{
    int num = 234689;

    cout << "The reverse of number " << num << " is: ";

    int reversed = revNum(num);

    cout << reversed;
}