#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str1[50], str2[50];
    int i=0, n = 0;

    cout << "\nEnter the first string: ";
    cin >> str1;
    cout << "\nEnter the second string: ";
    cin >> str2;

    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            n = 1;
            break;
        }
        i++;
    }
    cout<<"\nWithout using Library function: ";
    if (n == 0)
    {
        cout << "Strings are equal\n";
    }
    else
    {
        cout << "Strings are not equal\n";
    }
    cout<<"\nWith using library function: ";
    if (strcmp(str1,str2)==0)
    {
        cout<<"Strings are equal\n";
    }
    else
    {
        cout<<"Strings are not equal\n";
    }
    return 0;
}