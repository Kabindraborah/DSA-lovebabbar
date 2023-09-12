// finding maximum and minimum element of an array

#include<iostream>
#include <climits> // forINT_MIN and INT_MAX 

using namespace std;


int getMin(int num[],int n){

    int min= INT_MIN;

    for(int i =0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }

}


int getMax(int num[],int n){

    int max= INT_MAX;

    for(int i =0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }

}

int main(){
    int size;
    cout<<"Enter the size";
    cin>>size;

    int num[100];
cout<<"Enter the elements of the array";
for (int i = 0; i < size; i++)
{
    cin>>num[i];
}

cout<<"The maximum value is: "<<getMax(num,size)<<endl;
cout<<"The minimum value is: "<<getMin(num,size)<<endl;


return 0;
}