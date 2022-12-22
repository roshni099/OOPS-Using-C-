#include <iostream>

using namespace std;

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumrealcomplex(complex, complex);
    int sumcompcomlex(complex, complex);
};

class complex
{
public:
    int a, b;
    friend class calculator;

    int assign(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void display()
    {
        cout << "\n" << a << " + i" << b;
    }
};

int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumcompcomlex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.assign(5, 8);
    o1.display();
    o2.assign(7, 9);
    o2.display();
    calculator cal;
    int res = cal.sumrealcomplex(o1, o2);
    complex o3;
    o3.a=res;
    int resl = cal.sumcompcomlex(o1, o2);
    o3.b=resl;
    o3.display();
    return 0;
}