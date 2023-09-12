// finding maximum and minimum element of an array using a altrnate method of predefined max() and min()

#include<iostream>
#include <climits> // forINT_MIN and INT_MAX 

using namespace std;


int getMin(int num[],int size){

    int mini= INT_MAX;

    for(int i =0;i<size;i++){
      mini =min(mini,num[i]);
    }
 return mini;

}


int getMax(int num[],int size){

    int maxi= INT_MIN;

    for(int i =0;i<size;i++){
        maxi = max(maxi,num[i]);
    }

   return maxi;

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