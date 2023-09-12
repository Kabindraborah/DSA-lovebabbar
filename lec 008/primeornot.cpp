#include<iostream>
using namespace std;

// 1 -> Prime No // (True)
// 0 -> Not a Prime No // (False)

bool isPrime(int n){
        for( int i=2;i<n;i++){
            //if gets divided ,not a prime no
            if(n%i==0){
                return 0;
            }
        }
 return 1;
}
int main(){
    int n;
    cout<<"Enter a no ";
    cin>> n;
if(isPrime(n)){
    cout<<"Prime Number";}
else{cout<<"Is Not a prime number";}    
}
