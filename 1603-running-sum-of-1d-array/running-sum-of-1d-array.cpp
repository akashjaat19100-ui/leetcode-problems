class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
            vector<int>runningsum(nums.size());
            runningsum[0]=nums[0];
            for(int i=1;i<nums.size();i++){
                runningsum[i]=nums[i]+runningsum[i-1];
            }
            return runningsum;
    }
};