#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    
    int row = 1;
    char ch ='A';

    while (row<=n){
        int col =1;
     
        while(col<=row){
           
        cout<< ch <<" ";
        ch = ch+1;
        
        col=col+1;
    
        }
      cout<<"\n";

    row=row+1;
        }
}