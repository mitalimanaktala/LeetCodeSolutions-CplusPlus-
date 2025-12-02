#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int count = 0;

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (mat[i][j] == 1) {
                    bool isSpecial = true;

                    for (int k = 0; k < cols; ++k) {
                        if (k != j && mat[i][k] != 0) {
                            isSpecial = false;
                            break;
                        }
                    }

                    for (int k = 0; k < rows; ++k) {
                        if (k != i && mat[k][j] != 0) {
                            isSpecial = false;
                            break;
                        }
                    }

                    if (isSpecial) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};

int main() {
    Solution solution;

    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> mat(rows, vector<int>(cols));

    cout << "Enter the elements of the matrix row by row:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> mat[i][j];
        }
    }

    int result = solution.numSpecial(mat);

    cout << "Number of special positions: " << result << endl;

    return 0;
}
