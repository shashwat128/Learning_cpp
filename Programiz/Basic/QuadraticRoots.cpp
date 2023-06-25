#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, x, y, discriminant, realPart, imaginaryPart;

    cout << "Enter coefficients of a, b, c: ";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;

    x = (-b + sqrt(discriminant)) / (2 * a);
    y = (-b - sqrt(discriminant)) / (2 * a);

    if (discriminant > 0)
    {
        cout << "The roots are distinct and real and their values are " << endl;
        cout << "Root 1: " << x << endl;
        cout << "Root 2: " << y << endl;
    }
    else if (discriminant == 0)
    {
        cout << "The roots are real and same and Root = " << x << endl;
    }
    else
    {
        realPart = (-b / (2 * a));
        imaginaryPart = (-b / (2 * a));

        cout << "The roots are complex numbers and distinct." << endl;
        cout << "Root 1: " << realPart << " + " << imaginaryPart << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart;
    }
}