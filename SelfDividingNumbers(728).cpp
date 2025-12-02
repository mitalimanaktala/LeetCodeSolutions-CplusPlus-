#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            if (i % 10 == 0) {
                continue; 
            } else {
                int temp = i;
                bool isSelfDividing = true;
                
                while (temp > 0) {
                    int digit = temp % 10;
                    if (digit == 0 || i % digit != 0) {
                        isSelfDividing = false;
                        break;
                    }
                    temp /= 10;
                }
                
                if (isSelfDividing) {
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    int left, right;

    cout << "Enter the range (left and right): ";
    cin >> left >> right;

    vector<int> result = solution.selfDividingNumbers(left, right);

    cout << "Self Dividing Numbers between " << left << " and " << right << " are: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
