#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        
        for (int x : nums1) {
            merged.push_back(x);
        }
        for (int x : nums2) {
            merged.push_back(x);
        }

        sort(merged.begin(), merged.end());

        int s = merged.size();

        if (s % 2 != 0) {                    // odd length
            return merged[s / 2];
        } else {                             // even length
            int n = s / 2;
            return (merged[n - 1] + merged[n]) / 2.0;
        }
    }
};

int main() {
    int n1, n2;
    cout<<"Enter the numbers of values present in each array: ";
    cin >> n1 >> n2;     

    vector<int> nums1(n1), nums2(n2);

    cout<<"Enter the values of array1:\n";
    for (int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }

    cout<<"Enter the values of array2:\n";
    for (int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }

    Solution s;
    double ans = s.findMedianSortedArrays(nums1, nums2);

    cout <<"Medain of 2 arrays is: "<<ans<<endl;

    return 0;
}
