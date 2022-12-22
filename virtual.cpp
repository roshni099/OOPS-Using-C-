#include<iostream>
using namespace std;

class student
{
    protected:
    string s;
    int roll;
    public:
    void getdetails()
    {
        cout<<"\nEnter your name: ";
        cin>>s;
        cout<<"\nEnter yiur roll number: ";
        cin>>roll;
    }
    void displaydetails()
    {
        cout<<"Name: "<<s<<endl;
        cout<<"Roll number: "<<roll<<endl;
    }
};

class test: virtual public student
{
    public:
    float s1, s2, s3, s4, s5;
    void getdata()
    {
        cout<<"\nEnter the marks of :\n";
        cout<<"Subject 1: ";
        cin>>s1;
        cout<<"Subject 2: ";
        cin>>s2;
        cout<<"Subject 3: ";
        cin>>s3;
        cout<<"Subject 4: ";
        cin>>s4;
        cout<<"Subject 5: ";
        cin>>s5;
    }
    void displaydata()
    {
        cout<<"\nYour Marks in :"<<endl;
        cout<<"Subject 1: "<<s1<<endl;
        cout<<"Subject 2: "<<s2<<endl;
        cout<<"Subject 3: "<<s3<<endl;
        cout<<"Subject 4: "<<s4<<endl;
        cout<<"Subject 5: "<<s5<<endl;
    }
};

class sports: virtual public student
{
    public:
    int data;
    void getscore()
    {
        cout<<"\nEnter your PT score: ";
        cin>>data;
    }
    void displayscore()
    {
        cout<<"Your PT score is : "<<data<<endl;
    }
};

class result: public test, public sports
{
    public:
    float total;
    void displayresult()
    {
        getdetails();
        getdata();
        getscore();

        displaydetails();
        displaydata();
        displayscore();
        
        total=s1+s2+s3+s4+s5;
        if (total >=450)
        {
            cout<<"PASS in subjects"<<endl;
        }
        else 
        {
            cout<<"FAIL in subjects"<<endl;
        }
        if (data>=60)
        {
            cout<<"PASS in sports"<<endl;
        }
        else
        {
            cout<<"FAIL in sports"<<endl;
        }
    }
};

int main()
{
    result obj;
    obj.displayresult();
    return 0;
}