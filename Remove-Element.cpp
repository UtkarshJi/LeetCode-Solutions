#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int removeElement(vector<int>& nums, int val) {
            int index = 0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i] != val){
                    nums[index] = nums[i];
                }
            }
            return index;
        }        
};
int main() {
    Solution sol;
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int newLength = sol.removeElement(nums, val);

    cout << "New length: " << newLength << endl;
    cout << "Updated array: ";
    for(int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}