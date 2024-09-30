class Solution {
public:
    void sortColors(vector<int> &nums){
    int n = nums.size();
    
    for(int i=0; i<n-1; i++){
        int min_idx = i;
        for(int j=i+1; j<n; j++){
            if(nums[j]<nums[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx!=i){
            swap(nums[i], nums[min_idx]);
        }
    }
}
};
