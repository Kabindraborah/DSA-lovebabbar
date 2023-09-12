#include<iostream>
using namespace std;

bool isEven(int a){
    
    //odd = & of any number is 0
    if(a&1){
        return 0;
    }
    else{return 1;
    }
}

int main(){
    int num;
    cout<<"Enter the mumber to be checked ";
    cin>>num;

    if (isEven(num)){
        cout<<"Number is even"<<endl;}

    else{cout<<"The number is odd"<<endl;}

    }
