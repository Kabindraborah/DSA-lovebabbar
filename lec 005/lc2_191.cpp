#include <iostream>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {

        int count = 0;
        while (n > 0) {
            if (n & 1) {
                count++;
            }
            n >>= 1;
        }
        return count;
    }
};

int main() {
    Solution sol;
    int n;
   cout<<"Enter a base 10 number";
   cin>>n;
    int count = sol.hammingWeight(n);
    cout << count << endl; 
}
