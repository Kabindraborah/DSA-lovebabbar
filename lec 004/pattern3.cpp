#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;

    int i = 1;
    int j = 1;
    int count = 1;
    while(i<=n){
        while(j<=n){
            cout<<count<<"  ";
            count=count+1;
            j=j+1;
        }
        cout<<"\n";

        i=i+1;
    }
}