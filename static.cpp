#include <iostream>

using namespace std;

class student
{
    char name[20];
    int roll;
    int marks;
    static int count;
    static int i;
    static int total;

public:
    void getdata()
    {
        cout <<endl<< count + 1 << "st Entry:" << endl;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> roll;
        cout <<"Total marks: ";
        cin>>marks;
        count++;
    }
    void displaydata()
    {
        cout << endl<<i<< " Student Detail:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout<<"Total: "<<marks<<endl;
        i++;
    }
    static void getcount()
    {
        cout << "The total number of Student Detail Entry is " << count << endl;
    }
    void totalmarks(student a)
    {
        total+=a.marks;        
    }
    static void gettotal(int n)
    {
        cout<<endl<<"The total marks of "<<n<<" students is "<<total;
    }
};

int student ::count;
int student ::i=1;
int student :: total;

int main()
{
    student arr[100];
    int n;
    cout << "Enter the total number of entry: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        arr[i].getdata();
    }

    cout << "**********ALL DETAILS**********";
    for (int i = 0; i < n; i++)
    {
        arr[i].displaydata();
    }

    for (int i=0;i<n;i++)
    {
        arr[i].totalmarks(arr[i]);
    }

    student::getcount();
    student::gettotal(n);
    return 0;
}
