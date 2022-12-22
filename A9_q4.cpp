//WAP to throw and handle ‘division by zero’ exception.
#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    float div;
    try{
        if(b!=0){
            div=float(a)/float(b);
            cout<<"div is "<<div<<endl;
        }
        else
            throw 10;
    }
    catch(int x){
        cout<<"Dividing by 0 is not possible"<<endl;
    }
}