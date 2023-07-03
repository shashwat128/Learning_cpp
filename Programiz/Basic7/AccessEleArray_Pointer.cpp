#include <iostream>
#include <random>
using namespace std;

int main()
{ // create a 24-bit subtract-with-carry engine
    ranlux24_base engine;

    int data[5];

    for (int i = 0; i < 5; ++i)
    {
        int randomNumber = engine();
        data[i] = randomNumber;
    }

    cout << "The address and elements are: ";
    for (int i = 0; i < 5; ++i)
    {
        cout << endl
             << (data + i) << "  :  " << *(data + i);
    }

    return 0;
}