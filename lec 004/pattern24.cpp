#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the value of n: ";
    cin>>n;
    
    int row = 1;
    while(row <= n){
      int col = 1;
      //printing the first triangle
      while(col <= (n - row + 1)){
        cout<<col;
        col++;
      }
      //printing the stars 
      int stars = 2*row - 2;
      while(stars){
        cout<<"*";
        stars--;
      }
      //printing the second triangle
      int start = n - row + 1;
      while(start){
        cout<<start;
        start--;
      }
      
      cout<<endl;
      row++;
    }
    return 0;
}