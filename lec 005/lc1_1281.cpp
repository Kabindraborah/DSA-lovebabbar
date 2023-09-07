#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        
        while (n > 0) {
            int a = n % 10;
            n = n / 10;
            sum += a;
            product *= a;
            
        }
        
        return product - sum;
    }
};

int main() {
    Solution solution;
    int n;

    // Example usage
    cin >> n;
    cout << "Enter an integer: ";
    
    int result = solution.subtractProductAndSum(n);
    
    cout << "Result: " << result << endl;
    
    return 0;
}
