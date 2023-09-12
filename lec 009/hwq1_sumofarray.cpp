// print sum of all element in an array

#include<iostream>
using namespace std;

int sumArr(int arr[],int n){
    int sum =0;
    for (int i =0;i<n;i++){
        sum += arr[i];
}
return sum;
}

int main(){
    int arr[100],n;
    cout<<"Enter the no of elements";
    cin>>n;

    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++){
        cin>> arr[i];
        }
cout<<"The sum of all elements of the array are "<<sumArr(arr,n)<<endl;

}