#include <iostream>

using namespace std;

class student
{
public:
    string s;
    int roll;
    student()
    {
        cout << "\nName: ";
        cin >> s;
        cout << "\nRoll number: ";
        cin >> roll;
    }
};

class subject : public student
{
public:
    int mark[5];
    int i = 0;
    subject()
    {
        cout << "Enter the marks of the subject out of 100 :\n";
        for (i = 0; i < 5; i++)
        {
            cout << "Subject [" << i << "]: ";
            cin >> mark[i];
        }
    }
};

class Total : public subject
{
public:
    int all;
    float percent;
    Total()
    {
        for (int i = 0; i < 5; i++)
        {
            all += mark[i];
        }
        percent = all / 500.0;
    }
    void display()
    {
        cout << "GIVEN DETAILS:\n";
        cout << "Name: " << s << endl;
        cout << "Roll number: " << roll << endl;
        cout << "MARKS OF THE SUBJECTS:\n"
             << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject [" << i << "]: " << mark[i] << endl;
        }
        cout << "The total of the marks: " << all << endl;
        cout << "The percentage of the total marks is: " << percent << endl;
    }
};

int main()
{
    Total t1;
    t1.display();
    return 0;
}