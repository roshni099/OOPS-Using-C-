// Q1
#include <iostream>
using namespace std;
class dist
{
    int feet;
    int inches;

public:
    void input()
    {
        cin >> feet >> inches;
    }
    void operator+(dist ob2)
    {
        dist d3;
        d3.feet = feet + ob2.feet;
        d3.inches = inches + ob2.inches;
        if (d3.inches >= 12)
        {
            d3.feet++;
            d3.inches -= 12;
        }
        cout << "The distance is " << d3.feet << " " << d3.inches << endl;
    }
    void operator+(int x)
    {
        dist d2;
        d2.feet = feet;
        d2.inches = inches + x;
        if (d2.inches >= 12)
        {
            d2.feet++;
            d2.inches -= 12;
        }
        cout << d2.feet << " " << d2.inches << endl;
    }
    void operator-()
    {
        dist d;
        d.feet = -feet;
        d.inches = -inches;
        cout << "Unary" << endl
             << d.feet << " " << d.inches << endl;
    }
};
int main()
{
    dist d1, d2;
    cout << "D1" << endl;
    d1.input();
    cout << "D2" << endl;
    d2.input();
    d1 + d2;
    d1 + 4;
    -d2;
}