class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0], currentSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currentSum = (nums[i] > currentSum + nums[i]) ? nums[i] : currentSum + nums[i];
            maxSum = (currentSum > maxSum) ? currentSum : maxSum;
        }
 
        return maxSum;
    }
};
