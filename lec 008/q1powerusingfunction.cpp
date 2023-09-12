#include<iostream>
using namespace std;

int power(){

int a , b;
    cout<<"Enter the base and the power";
    cin>>a>>b;
 
 int ans=1;

for(int i=1;i<=b;i++) {
    ans = ans*a;
}
return ans;  
}

int main(){

cout<<"The answer is: "<<power()<<endl;

   return 0;
}
