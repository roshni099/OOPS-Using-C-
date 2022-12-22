#include<iostream>
#include<fstream>
using namespace std;

class array
{
    public:
    int n;
    int arr[10];
    void array1(int size)
    {
        n=size;
        for (int i=0;i<n;i++)
        {
            arr[i]=0;
        }
    }

    friend istream &operator >>(istream &in, array &c)
    {
        for (int i=0;i<c.n;i++)
        {
            in>>c.arr[i];
        }
        return in;
    }

    friend ostream &operator <<(ostream &out, array &c)
    {
        for (int i=0;i<c.n;i++)
        {
            out<<c.arr[i]<<endl;
        }
        return out;
    }
};

int main()
{
    array obj;
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    obj.array1(size);
    cin>>obj;
    cout<<"the given array is:\n";
    cout<<obj;

}