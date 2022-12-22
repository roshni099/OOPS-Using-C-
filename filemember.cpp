#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream out;
    out.open("sample.txt");

    out<<"\nThis is Roshni";

    out<<"\nThis is also roshni";
    out.close();

    ofstream hout("sample1.txt");
    hout<<"This is roshni";
    hout<<"This is not roshni";
    hout.close();

    string s1, s2;

    ifstream in("sample.txt");

    getline(in,s1);
    in.close();

    ifstream pim;

    pim.open("sample1.txt");

    while(pim.eof()==0)
    {
        getline(pim,s2);
        cout<<s2<<endl;
    }

    cout<<s2;

    return 0;
}