// finding maximum and minimum element of an array

#include<iostream>
#include <climits> // forINT_MIN and INT_MAX 

using namespace std;


int getMin(int num[],int size){

    int min= INT_MAX;

    for(int i =0;i<size;i++){
        if(num[i]<min){
            min=num[i];
             }
    }
 return min;

}


int getMax(int num[],int size){

    int max= INT_MIN;

    for(int i =0;i<size;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
   return max;

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

cout<<"The minimum value is: "<<getMin(num,size)<<endl;
cout<<"The maximum value is: "<<getMax(num,size)<<endl;



return 0;
}