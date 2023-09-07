#include<iostream>
using namespace std;

int main(){
int n ;

cout<<"Enter the number to be checked";
cin>>n;

int i =2;
while(i<n){
    if(n % i == 0){

        cout<<"The number is not a prime no";}
    else{
        cout<<"The number is a prime no";
}    
i=i+1;
}
}
