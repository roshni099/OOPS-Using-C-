// Create a class which a complex number. Add two objects and display the resultant object.
#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void input()
    {
        cout << "Enter Real Part: ";
        cin >> a;
        cout << "Enter Imaginary Part: ";
        cin >> b;
    }
    void output()
    {
        cout << "The result is " << a << "+" << b << "i" << endl;
    }
    void operator+(complex c1)
    {
        complex sum;
        sum.a = a + c1.a;
        sum.b = b + c1.b;
        sum.output();
    }
    void operator++(int)
    {
        a++;
        b++;
        output();
    }
    void operator++()
    {
        ++a;
        ++b;
        output();
    }
};
int main()
{
    complex c1, c2;
    c1.input();
    c2.input();
    c1 + c2;
    c1++;
    ++c2;
}