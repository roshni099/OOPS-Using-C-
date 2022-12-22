/*WAP to add two objects of time class. Overload the operator ‘==’ to compare two objects
and display whether they are equal or not. Overload the assignment operator.*/
#include <iostream>
using namespace std;
class tim
{
    int hour;
    int mins;
    int secs;

public:
    void input()
    {
        cin >> hour;
        cin >> mins;
        cin >> secs;
    }
    void operator+(tim t)
    {
        tim sum;
        sum.hour = hour + t.hour;
        sum.mins = mins + t.mins;
        sum.secs = secs + t.secs;
        if (sum.secs >= 60)
        {
            sum.mins++;
            sum.secs -= 60;
        }
        if (sum.mins >= 60)
        {
            sum.hour++;
            sum.mins -= 60;
        }
        cout << "The sum is " << sum.hour << "hh" << sum.mins << "mm" << sum.secs << "ss" << endl;
    }
    void operator==(tim b)
    {
        if ((hour == b.hour) && (mins == b.mins) && (secs == b.secs))
        {
            cout << "Equal" << endl;
        }
        else
        {
            cout << "Not Equal" << endl;
        }
    }
};
int main()
{
    tim t1;
    tim t2;
    t1.input();
    t2.input();
    t1 + t2;
    t1 == t2;
    return 0;
}