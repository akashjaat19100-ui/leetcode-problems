class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int x=0;
        for(int i=0;i<nums.size();i++){
            x = nums[i];
            ans[i]=nums[x];
        }
        return ans;
    }
};