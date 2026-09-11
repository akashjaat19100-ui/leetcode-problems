class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int x=1;
        for(int i=0;i<n;i++){
            if(nums[i]==x){
                x++;
            }
        }
        return x;
    }
};