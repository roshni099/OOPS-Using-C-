#include <iostream>
using namespace std;

class dist
{
public:
    double feet;
    double inches;

    void getdata()
    {
        cout << "Enter Feet and Inches: ";
        cin >> feet >> inches;
    }

    void display()
    {
        cout << feet << "'" << inches << "''" << endl;
    }

    void add(dist a, dist b)
    {
        inches = a.inches + b.inches;
        feet = a.feet + b.feet;
    }

    dist add(dist b)
    {
        dist temp;
        temp.inches = inches + b.inches;
        temp.feet = feet + b.feet;
        return temp;
    }
};

int main()
{
    dist c1, c2, c3, c4;
    c1.getdata();
    c2.getdata();

    cout << "Distance 1: ";
    c1.display();

    cout << "Distance 2: ";
    c2.display();

    c3.add(c1, c2);
    cout << "Output for c3.add(c1,c2): " << endl;
    c3.display();

    c4 = c1.add(c2);
    cout << "Output for c4=c1.add(c2): " << endl;
    c4.display();
    return 0;
}