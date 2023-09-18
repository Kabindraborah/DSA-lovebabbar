class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftsum = 0 , rightsum = 0 , prefix = 0;
        for(int i = 0 ; i < n ; i++){
            prefix += nums[i];// add all element in prefix 
        }
        rightsum  = prefix ; // make rightsum eqaul to prefix sum
        for(int j= 0 ; j<n ; j++){
            leftsum += nums[j]; // add element in leftsum and check if (leftsum==rightsum) at any index before substracting element from rightsum, if find eqaul then return that index 
            if(rightsum == leftsum) return j;
            rightsum -= nums[j];

        }
        return -1;// means not pivot index find 
    }
};


/*int n = nums.size();: In this case, n will be set to 6 because there are six elements in the nums vector.

int leftsum = 0, rightsum = 0, prefix = 0;: Initialize leftsum, rightsum, and prefix to 0.

for(int i = 0; i < n; i++): This loop calculates the total sum of all elements and stores it in prefix. In this example, prefix will be 1 + 7 + 3 + 6 + 5 + 6 = 28.

rightsum = prefix;: rightsum is also set to 28 initially because it represents the sum of all elements on the right side of the current index, and initially, it's all the elements in the array.

Now, let's go through the second loop:

for(int j = 0; j < n; j++): This loop iterates through the elements of the vector to find the pivot index.

For j = 0, leftsum += nums[0]; => leftsum = 1.

Check: if (rightsum == leftsum) is not true (28 is not equal to 1), so it continues.

rightsum -= nums[0]; => rightsum = 28 - 1 = 27.

For j = 1, leftsum += nums[1]; => leftsum = 1 + 7 = 8.

Check: if (rightsum == leftsum) is not true (28 is not equal to 8), so it continues.

rightsum -= nums[1]; => rightsum = 27 - 7 = 20.

For j = 2, leftsum += nums[2]; => leftsum = 8 + 3 = 11.

Check: if (rightsum == leftsum) is not true (28 is not equal to 11), so it continues.

rightsum -= nums[2]; => rightsum = 20 - 3 = 17.

For j = 3, leftsum += nums[3]; => leftsum = 11 + 6 = 17.

Check: if (rightsum == leftsum) is true (28 is equal to 17), so it returns j, which is 3. This means that the pivot index is found at index 3.*/