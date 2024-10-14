class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) return 0;
     
    sort(nums.begin(), nums.end());
    int longest_streak = 1, current_streak = 1; 
    
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i-1]) {
            if (nums[i] == nums[i-1] + 1) { 
                current_streak++;
            } else {
                longest_streak = max(longest_streak, current_streak);
                current_streak = 1;
            }
        }
    }
    
    return max(longest_streak, current_streak);
}
};
