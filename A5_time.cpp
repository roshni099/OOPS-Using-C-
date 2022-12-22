#include <iostream>

using namespace std;

class time
{
private:
    int hour = 0;
    int min = 0;

public:
    time()
    {
        cout << "Default Constructor called." << endl;
    }
    time(int h, int m)
    {
        min = 0;
        hour = h;
        min = m;
        cout << "Parameterized Costructor called." << endl;
    }
    time(time &ob)
    {
        cout << "Copy Costructor called." << endl;
        hour = ob.hour;
        min = ob.min;
    }
    void display()
    {
        cout << "\nTIME: " << hour << ":" << min;
    }
};

int main()
{
    time t1;
    int h, m;
    cout << "Enter time(hh & mm): ";
    cin >> h >> m;
    time t2(h, m);
    time t3(t2);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}
