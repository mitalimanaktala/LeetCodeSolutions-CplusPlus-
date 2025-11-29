#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=target){
                return i;
            }
        }
        return nums.size();
    }
};
int main(){
    Solution solution;

    
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    vector<int> nums(n);

    cout<<"Enter the elements of the array in sorted order:\n";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int target;
    cout<<"Enter the target value: ";
    cin>>target;

    int result=solution.searchInsert(nums,target);
    cout << "The insert position for target " << target << " is: " << result << endl;

    return 0;
}