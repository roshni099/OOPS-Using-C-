/*WAP to add two objects of distance class.
Overload the operator ‘>’ to compare two objects and return the object with larger time value and display it.
Overload the ‘==’ operator to compare and display whether two given objects contain same distance value.*/
#include <iostream>
using namespace std;
class Distance
{
    int time;

public:
    void input()
    {
        cin >> time;
    }
    void operator>(Distance d2)
    {
        if (time > d2.time)
            cout << "Distance 1 is greater than Distance 2" << endl;
        else
            cout << "Distance 2 is greater than Distance 1" << endl;
    }
    void operator==(Distance d2)
    {
        if (time == d2.time)
            cout << "Equal Distance" << endl;
        else
            cout << "Not Equal Distance" << endl;
    }
};
int main()
{
    Distance d1;
    Distance d2;
    d1.input();
    d2.input();
    d1 > d2;
    d1 == d2;
}