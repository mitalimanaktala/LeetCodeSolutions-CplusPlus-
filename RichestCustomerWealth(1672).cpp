#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> total;
        for(int i=0;i<accounts.size();i++){
            
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            total.push_back(sum);
        }
        int max=total[0];
        for(int i=1;i<total.size();i++){
            if(max<total[i]){
                max=total[i];
            }
        }
        return max;
    }
};

int main() {
    int n, m;
    cout << "Enter number of customers and number of accounts: ";
    cin >> n >> m;

    vector<vector<int>> accounts(n, vector<int>(m));

    cout << "Enter the account values:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> accounts[i][j];
        }
    }

    Solution sol;
    int result = sol.maximumWealth(accounts);

    cout << "Maximum wealth: " << result << endl;

    return 0;
}