#include <iostream>
using namespace std;

class Student
{
public:
    char name[20];
    int roll, age;

    void getDetails()
    {
        cout << "Input roll number: ";
        cin >> roll;
        cout << "Input name: ";
        cin.get();
        cin.getline(name, 20);
        cout << "Input age: ";
        cin >> age;
    }

    void putDetails()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Test : public Student
{
public:
    int s1, s2, s3, s4, s5;

    void getmarks()
    {
        cout << "\n\nInput marks: \n";
        cout << "Subject 1: ";
        cin >> s1;
        cout << "Subject 2: ";
        cin >> s2;
        cout << "Subject 3: ";
        cin >> s3;
        cout << "Subject 4: ";
        cin >> s4;
        cout << "Subject 5: ";
        cin >> s5;
    }

    void putmarks()
    {
        cout<<endl<<"Marks of the 5 subjects:"<<endl;
        cout << "Subject 1: " << s1 << endl;
        cout << "Subject 2: " << s2 << endl;
        cout << "Subject 3: " << s3 << endl;
        cout << "Subject 2: " << s4 << endl;
        cout << "Subject 3: " << s5 << endl;
    }
};

int main()
{
    Test t;
    t.getDetails();
    t.getmarks();
    cout<<endl<<endl<<"GIVEN DETAILS:"<<endl;
    t.putDetails();
    t.putmarks();
    return 0;
}