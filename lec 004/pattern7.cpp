#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    
    int row = 1;
    while (row<=n){
        int col =1;
        int value = row;
        while(col<=row){
            cout<<value;
            value = value+1;
            col=col+1;
    
        }
    cout<<"\n";
    row=row+1;
        }
}

//  alternate method
/*
int row =  1;
while(row<=n){
int column= row ;
while (column < row *2){
    cout<<column<<" ";
    column =column +1;
}
cout<< endl;
row = row+1;
}
return 0;
}


*/

