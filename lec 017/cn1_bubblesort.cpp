#include<vector>
using namespace std;

bool swapped =  false;
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i<n; i++){
        for(int j = 0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}
