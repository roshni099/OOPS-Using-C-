#include <iostream>
using namespace std;

class Complex;

class x;

class y
{
    int data;

public:
    void getdetails()
    {
        cout << "Enter the value of b : ";
        cin >> data;
    }
    void displaydetails()
    {
        cout << "Value of b: " << data<<endl;
    }

    friend void sum(x, y);
};

class x
{
    int num;

public:
    void getdetails()
    {
        cout << "Enter the value of a: ";
        cin >> num;
    }
    void displaydetails()
    {
        cout << "Value of a: " << num<<endl;
    }

    friend void sum(x, y);
};

void sum(x a, y b)
{
    cout<<endl<<"The sum of the given number is: " << b.data + a.num << endl;
}

class calculator
{
public:
    int sum(Complex, Complex);
};

class Complex
{
    int a, b;
    friend int calculator::sum(Complex, Complex);

public:
    void getdetails()
    {
        cout << "Enter Real part: ";
        cin >> a;
        cout << "\nEnter complex part: ";
        cin >> b;
        cout << endl
             << endl;
    }
    void displaydetails(int n)
    {
        cout << n << " Number: " << a << " + "
             << "i" << b << endl;
    }
};

int calculator::sum(Complex o1, Complex o2)
{
    int x, y;
    x = o1.a + o2.a;
    y = o1.b + o2.b;
    cout << "The sum of these two number is: " << x << " + "
         << "i" << y << endl;
}

int main()
{
    Complex o1, o2;
    x a;
    y b;
    a.getdetails();
    b.getdetails();
    a.displaydetails();
    b.displaydetails();
    sum(a, b);
    o1.getdetails();
    o2.getdetails();
    o1.displaydetails(1);
    o2.displaydetails(2);
    calculator cal;
    cal.sum(o1, o2);
    return 0;
}