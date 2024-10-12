class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int sameNum = 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(nums[i]==nums[i+1]){
                sameNum = nums[i];
                break;
            }
        }
    return sameNum;
    }
};
