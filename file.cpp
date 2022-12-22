#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string s1="Today is oop paper.";
    string s2;
    int i=0, count=0;

    ofstream hout("exam.txt");
    hout<<s1;
    hout.close();

    ifstream in("exam.txt");
    getline(in,s2);
    while(s2[i]!='\0')
    {
        if (s2[i]=='o')
        {
            count++;
        }
        i++;
    }
    cout<<"The total number of 'o' int the text is : "<<count;
    in.close();

    fstream st;
    st.open("oops.txt", ios::out);
    if (!st)
    {
        cout<<"failed";
    }
    else
    {
        cout<<"Created.\n";
    }
    return 0;

}