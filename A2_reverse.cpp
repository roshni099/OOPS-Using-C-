#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i, n;
    string str = "Object Oriented Programming";
    n = str.length();
    cout<<"\nBefore reversing the string: "<<str;
    cout << "\n\nAfter reversing string : ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << str[i];
    }
    cout<<"\n\n";
    return 0;
}