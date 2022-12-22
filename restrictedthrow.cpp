#include<iostream>

using namespace std;

void func(int i)throw(int , char , double)
{
    if (i==0)
    {
        throw (10);
    }
    if (i==1)
    {
        throw("R");
    }
    if (i==2)
    {
        throw(123.123);
    }
}

int main()
{
    int i;
    cout<<"Enter the value of i: ";
    cin>>i;

    try
    {
        func(i);
    }
    catch(int x)
    {
        cout<<"Caugth int : "<<x;
    }
    catch(const char *a)
    {
        cout<<"Caugth char: "<<a;
    }
    catch(double d)
    {
        cout<<"caught double: "<<d;
    }

    return 0;
}