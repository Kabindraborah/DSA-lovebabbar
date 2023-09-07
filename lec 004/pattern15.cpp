#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    
    int row = 1;

    while (row<=n){
        int col =1;
     
        while(col<=row){
           char start = ('A' + row + col-2);
            cout<< start;
        
            col=col+1;
    
        }
    cout<<"\n";
    row=row+1;
        }
}