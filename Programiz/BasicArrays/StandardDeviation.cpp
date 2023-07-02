#include <iostream>
#include <cmath>

using namespace std;

float calculateSD(float data[]);

int main()
{
    int i;
    float data[10] = {93, 43, 35, 24, 23, 45, 54, 99, 88, 86};

    cout << endl
         << "Standard Deviation: " << calculateSD(data);

    return 0;
}

float calculateSD(float data[])
{
    float sum = 0.0, mean, standardDeviation = 0.0;
    int i;

    for (i = 0; i < 10; ++i)
    {
        sum = sum + data[i];
    }

    mean = sum / 10;

    for (i = 0; i < 10; ++i)
    {
        standardDeviation = standardDeviation + pow(data[i] - mean, 2);
    }

    return sqrt(standardDeviation / 10);
}