#include <iostream>

using namespace std;

int main()
{
    int i, num;
    float arr[100];

    cout << "Enter total number of elements(1 to 100): ";
    cin >> num;
    cout << endl;

    for (i = 0; i < num; ++i)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (i = 1; i < num; ++i)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }

    cout << endl
         << "largest element = " << arr[0];

    return 0;
}