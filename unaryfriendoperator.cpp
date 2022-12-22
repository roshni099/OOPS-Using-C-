#include<iostream>
using namespace std;

class number
{
    public:
    int a, b, c;
    number (){}
    number (int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"\nThe value of a is: "<<a<<endl;
        cout<<"\nThe value of b is: "<<b<<endl;
        cout<<"\nThe value of c is: "<<c<<endl;
    }

    friend number operator -(number D)
    {
        D.a=-D.a;
        D.b=-D.b;
        D.c=-D.c;
        return D;
    }
};

int main()
{
    int a, b, c;
    cout << "\nEnter the value of a: ";
    cin >> a;
    cout << "\nEnter the value of b: ";
    cin >> b;
    cout << "\nEnter the value of c: ";
    cin >> c;
    
    number obj(a, b, c);
    obj.display();

    number s;
    s = -obj;

    s.display();
    return 0;
}