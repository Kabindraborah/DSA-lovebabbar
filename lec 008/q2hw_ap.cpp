#include <iostream>
using namespace std;
int APterm(int num){
    int ans = 3*num + 7;
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value of N:"<<endl;
    cin>>n;

    int answer = APterm(n);
    cout<<"The Nth Term is "<<answer<<endl;

}