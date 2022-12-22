#include<iostream>

using namespace std;

class Complex
{
    int a, b;
    friend Complex sumcomplex(Complex o1, Complex o2);
    public:
    void getdata(int x, int y)
    {
        a=x;
        b=y;
    }
    void displaydata()
    {
        cout<<"Your number: "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex sumcomplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.getdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main()
{
    Complex m, n, sum;
    int p, q;
    
    cout<<"Enter the value of a and b for first complex number: ";
    cin>>p>>q;
    m.getdata(p, q);

    cout<<endl<<"Enter the value of a and b for second complex number: ";
    cin>>p>>q;
    n.getdata(p, q);

    m.displaydata();
    n.displaydata();

    sum= sumcomplex(m, n);
    sum.displaydata();

    return 0;
}
