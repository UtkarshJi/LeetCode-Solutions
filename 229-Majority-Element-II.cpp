class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> list;
        map<int, int> mp;
        int n = nums.size();
        int mini = (int)(n/3)+1;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==mini){
                list.push_back(nums[i]);
            }
            if(list.size()==2)break;
        }
        sort(list.begin(), list.end());
    return list;
    }
};
