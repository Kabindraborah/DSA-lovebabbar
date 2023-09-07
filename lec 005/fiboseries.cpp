//fibonacci series = 0,1,1,2,3,5,8,13,21.....

#include<iostream>
using namespace std;

int main(){

int a=0;
int b=1;
int n;

cout<<"Enter the value of n: "<<endl;
cin>>n;
cout<<a<<" "<<b<<" ";
for(int i=1; i<=n; i++){

    int fibo = a+b;
    cout<<fibo<<" ";

    a=b;
    b=fibo;

}
}
