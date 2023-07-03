#include <iostream>
using namespace std;

// Find Frequency of Characters in a C-style String
int main()
{
    char c[] = "C++ programming is not easy, so need much dedicated effort from the user of magic.";
    char check = 'm';
    int count = 0;

    for (int i = 0; c[i] != '\0'; ++i)
    {
        if (check == c[i])
        {
            ++count;
        }
    }

    cout << "Frequency of " << check << " = " << count;
    return 0;
}