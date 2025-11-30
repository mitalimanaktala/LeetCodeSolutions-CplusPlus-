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
    cout<<"Enter the rows and columns: ";
    cin >> rows >> cols;  

    vector<vector<int>> grid(rows, vector<int>(cols));

    
    cout<<"Enter the values : \n";
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
