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
            value = value-1;
            col=col+1;
    
        }
    cout<<"\n";
    row=row+1;
        }
}

/*
int i = 1;
while(i<=n){
    int j =1;
    while(j<=i){
        cout<<(i-j+1);
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
}
*/