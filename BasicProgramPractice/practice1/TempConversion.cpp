// convert deg Celcius to Fahrenhite and vice-versa

#include <iostream>

using namespace std;

int main()
{
    int option;

    cout << "Press 1 for converting Celsius to Fahrenhite." << endl;
    cout << "Press 2 for Fahrenhite to Celsius." << endl;
    cout << "press 3 for Exit.";
    cin >> option;

    switch (option)
    {
        double cel, fah;
    case 1:
        cout << "Enter the temperature in Celsius: " << endl;
        cin >> cel;
        fah = (cel * 9 / 5) + 32;
        cout << "\nTemperature in Fahrenhite is = " << fah;
        break;

    case 2:
        cout << "Enter the temperature in Fahrenhite: " << endl;
        cin >> fah;
        cel = (fah - 32) * 5 / 9;
        cout << "\nTemperature in Celsius is = " << cel;
        break;

    case 3:
        exit(0);
    }
    return 0;
}