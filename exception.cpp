#include<iostream>
using namespace std;

int main()
{
    int x, y, a;
    char *s;

    cout<<"Enter the value of x and y: ";
    cin>>x>>y;
    try
    {
        if (x!=0 || y!=0)
        {
            a = x/y;
            cout<<"the value is: "<<a;
        }
        else
        {
            throw("Can't Be Divided!");
        }
    }
    catch (const char *s)
    {
        cout<<s;
    }
    return 0;
}