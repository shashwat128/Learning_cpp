#include <iostream>
using namespace std;

void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void multiplyMatices(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void display(int mult[][10], int rowFirst, int columnSecond);

int main()
{
    int firstMatrix[10][10], secondMatrix[10][10], mult[10][10], rowFirst, columnFirst, rowSecond, columnSecond, i, j, k;

    cout << "Enter rows and column for first matrix: ";
    cin >> rowFirst >> columnFirst;

    cout << "Enter rows and column for second matrix: ";
    cin >> rowSecond >> columnSecond;

    while (columnFirst != rowSecond)
    {
        cout << "Error! column of first matrix not equal to row of second." << endl;
        cout << "Enter rows and column for first matrix: ";
        cin >> rowFirst >> columnFirst;
        cout << "Enter rows and column for second matrix: ";
        cin >> rowSecond >> columnSecond;
    }

    // Function for input
    enterData(firstMatrix, secondMatrix, rowFirst, columnFirst, rowSecond, columnSecond);

    // Function to multiply
    multiplyMatices(firstMatrix, secondMatrix, mult, rowFirst, columnFirst, rowSecond, columnSecond);

    // Function to display
    display(mult, rowFirst, columnSecond);

    return 0;
}

// function to take input
void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
    int i, j;
    cout << endl
         << "Enter elements of matrix 1:" << endl;
    for (i = 0; i < rowFirst; ++i)
    {
        for (j = 0; j < columnFirst; ++j)
        {
            cout << "Enter elements a" << i + 1 << j + 1 << ": ";
            cin >> firstMatrix[i][j];
        }
    }

    cout << endl
         << "Enter elements of matrix 2: " << endl;
    for (i = 0; i < rowSecond; ++i)
    {
        for (j = 0; j < columnSecond; ++j)
        {
            cout << "Enter elements b " << i + 1 << j + 1 << " : ";
            cin >> secondMatrix[i][j];
        }
    }
}

// multiply
void multiplyMatices(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
    int i, j, k;

    // Initializing elements of matrix mult to  0.
    for (i = 0; i < rowFirst; ++i)
    {
        for (j = 0; j < columnSecond; ++j)
        {
            mult[i][j] = 0;
        }
    }

    // Multiplying matrix and storing in array
    for (i = 0; i < rowFirst; ++i)
    {
        for (j = 0; j < columnSecond; ++j)
        {
            for (k = 0; k < columnFirst; ++k)
            {
                mult[i][j] = mult[i][j] + firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void display(int mult[][10], int rowFirst, int columnSecond)
{
    int i, j;

    cout << "Output Matrix: " << endl;
    for (i = 0; i < rowFirst; ++i)
    {
        for (j = 0; j < columnSecond; ++j)
        {
            cout << mult[i][j] << " ";
            if (j == columnSecond - 1)
            {
                cout << endl
                     << endl;
            }
        }
    }
}