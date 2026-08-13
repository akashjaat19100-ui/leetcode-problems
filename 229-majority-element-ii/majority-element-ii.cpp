class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        int k = nums.size()/3;
        vector<int>v;
        
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
       for(auto it : hash) {
            if(it.second > k) {
                v.push_back(it.first);
            }
        }
        return v;
    }
};