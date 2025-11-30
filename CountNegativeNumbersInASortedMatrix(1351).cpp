#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] < 0) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    int rows, cols;
    cin >> rows >> cols;  // Input dimensions

    vector<vector<int>> grid(rows, vector<int>(cols));

    // Input grid values
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> grid[i][j];
        }
    }

    Solution sol;
    cout<<"Count: ";
    cout << sol.countNegatives(grid) << endl;

    return 0;
}
