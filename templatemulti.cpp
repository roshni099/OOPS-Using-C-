#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>

class value
{
public:
    T1 a;
    T2 b;
    T3 c;
    value(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }

    void display()
    {
        cout << "\nThe value of a is " << a << endl;
        cout << "\nThe value of b is " << b << endl;
        cout << "\nThe value of c is " << c << endl;
    }
};

int main()
{
    value <> obj(10, 20.5, 'c');
    value<float, int, char> obj1(40.5, 50, 'a');
    obj.display();
    obj1.display();
    return 0;
}