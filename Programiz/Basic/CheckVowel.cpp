#include <iostream>
using namespace std;

int main()
{
    char c;
    bool isVowel;

    cout << "Enter an alphabet: ";
    cin >> c;

    isVowel = (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U');

    if (isVowel)
    {
        cout << "It is a vowel.";
    }
    else
    {
        cout << "Is a consonent.";
    }

    return 0;
}