vector<int> ans;

for(int i=0;i<n;i++){
    int element = arr1[i];

    for(int j=0;j<m;j++){
        if(element=arr2[j]){
            ans.push_back(element);
            arr2[j]=-112231; //used any neg no cuz Coding Ninjas compiler was not accepting INT_MIN for some reason
            break;
        }
    }
}
