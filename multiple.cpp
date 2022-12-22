#include<iostream>

using namespace std;

class base1
{
    public:
    int a;
};

class base2
{
    public:
    int b;
};

class base3
{
    public:
    int c;
};

class derived: public base1,public base2, public base3
{
    public:
    void getdetails()
    {
        cout<<"\nValue of a: ";
        cin>>a;
        cout<<"\nValue of b: ";
        cin>>b;
        cout<<"\nValue of c: ";
        cin>>c;
    }
    void display()
    {
        cout<<"\nValue of a: "<<a<<endl;
        cout<<"\nValue of b: "<<b<<endl;
        cout<<"\nValue of c: "<<c<<endl;
    }
};

int main()
{
    derived d;
    d.getdetails();
    d.display();
    return 0;
}