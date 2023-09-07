#include <iostream>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        
        while (n != 0) {
            if (n & 1) {
                count++;
            }
            n = n >> 1;
        }
        
        return count;
    }
};

int main() {
    Solution solution;
    uint32_t n;

    // Example usage
    cout << "Enter a 32-bit unsigned integer: ";
    cin >> n;
    
    int result = solution.hammingWeight(n);
    
    cout << "Number of 1 bits (Hamming weight): " << result << endl;
    
    return 0;
}
