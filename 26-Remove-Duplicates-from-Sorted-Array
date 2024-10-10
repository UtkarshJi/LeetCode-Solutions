class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        int pointer = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != nums[pointer]){
                pointer++;
                nums[pointer] = nums[i];
            }
        }
        return pointer + 1;
    }
};
