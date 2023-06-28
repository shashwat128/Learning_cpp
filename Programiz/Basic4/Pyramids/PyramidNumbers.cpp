#include <iostream>
using namespace std;

int main()
{
    int rows, count1 = 0, count2 = 0, k = 0;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i)
    {
        for (int space = 1; space <= rows - i; ++space)
        {
            cout << "  ";
            ++count1;
        }

        while (k != 2 * i - 1)
        {
            if (count1 <= rows - 1)
            {
                cout << i + k << " ";
                ++count1;
            }
            else
            {
                ++count2;
                cout << i + k - 2 * count2 << " ";
            }
            ++k;
        }
        count2 = count1 = k = 0;

        cout << endl;
    }

    return 0;
}