// Length of C-style string

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "C++ Programming is a lengthy process.";

    cout << "String Length = " << strlen(str);

    return 0;
}