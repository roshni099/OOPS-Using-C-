#include <iostream>

using namespace std;

int main()
{
    int a[2][3], b[2][3], r[2][3];
    int i, j;
    cout << "\nEnter the value of elements of First matrix:\n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "\nElement[" << i + 1 << "][" << j + 1 << "] : ";
            cin >> a[i][j];
        }
    }

    cout << "\nEnter the value of elements of Second matrix:\n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "\nElement[" << i + 1 << "][" << j + 1 << "] : ";
            cin >> b[i][j];
        }
    }

    cout << "FIRST MATRIX: \n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n\n";
    }

    cout << "SECOND MATRIX: \n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << "\n\n";
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            r[i][j] = a[i][j] + b[i][j];
        }
    }

    cout<<"Resultant Matrix:\n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << r[i][j] << "\t";
        }
        cout << "\n\n";
    } 
    return 0;
}