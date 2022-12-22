//WAP to throw and handle’ array out of bound’ exception.
#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int x;
    cout<<"Enter elements: ";
    try{
        for(int i=0;i<5;i++){
            cin>>arr[i];
        }
        cin>>x;
        throw x;
    }
    catch(int x){
        cout<<x<<" cannot be stored in the array"<<endl;
    }
}