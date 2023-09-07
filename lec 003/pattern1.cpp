#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter perimeter n for the (n x n) matrix pattern to be created ";
    cin>>n;

    int i = 1;
    while(i<=n){

        int j = 1;
        while(j<=n){
                
                cout<<"*";
                j=j+1;
        }
         cout<<"\n";
         i=i+1;
    }
}