#include <iostream>
using namespace std;

int main()
{
    string str = "Ok, so this looks like a job for me, so, Everybody come follow me. We need a little controversy, they regret this instand without me.";
    char checkCharacter = 's';
    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == checkCharacter)
        {
            ++count;
        }
    }

    cout << "Number of " << checkCharacter << " = " << count;

    return 0;
}