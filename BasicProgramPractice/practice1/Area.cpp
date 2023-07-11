// area of circle, square, rectangle, and triangle using switch case.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, area;
    int choice;

    cout << "Press 1 to find area of circle." << endl;
    cout << "Press 2 to find area of square." << endl;
    cout << "Press 3 to find area of rectangle." << endl;
    cout << "Press 4 to find area of triangle." << endl
         << endl;
    cout << "Enter your choice: ";

    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        cout << "\n     Enter radius of circle: ";
        cin >> a;
        area = M_PI * a * a;
        cout << "\n     Area of Circle = " << area << endl;
        break;
    }
    case 2:
    {
        cout << "\n     Enter a side of Square: ";
        cin >> a;
        area = a * a;
        cout << "\n     Area of Square = " << area << endl;
        break;
    }
    case 3:
    {
        cout << "\n     Enter the sides of rectangle: ";
        cin >> a >> b;
        area = a * b;
        cout << "\n     Area of rectangle = " << area << endl;
        break;
    }
    case 4:
    {
        cout << "\n     Enter base and height of triangle: ";
        cin >> a >> b;
        area = (a * b) / 2;
        cout << "\n     Area of triangle = " << area << endl;
        break;
    }

    default:
        cout << "\n     Invalid Input.";
        break;
    }

    return 0;
}