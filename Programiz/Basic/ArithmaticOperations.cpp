#include <iostream>
using namespace std;

int main()
{
    double num1 = 4.138;
    double num2 = 3.87;

    cout << "Num 1: " << num1 << endl;
    cout << "Num 2: " << num2 << endl;

    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;
    double divide = num1 / num2;

    cout << "The addition of: " << num1 << " and " << num2 << " = " << sum << endl;
    cout << "The subtraction of: " << num1 << " and " << num2 << " = " << sum << endl;
    cout << "The multiplication of: " << num1 << " and " << num2 << " = " << sum << endl;
    cout << "The dividion of: " << num1 << " and " << num2 << " = " << sum << endl;

    return 0;
}