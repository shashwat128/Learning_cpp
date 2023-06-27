#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float base = 3.141, exponent = 5, result;

    result = pow(base, exponent);

    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}