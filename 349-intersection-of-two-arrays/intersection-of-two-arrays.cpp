class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i=0;i<nums1.size();i++){
            for(int x=0;x<nums2.size();x++){
                if(nums1[i]==nums2[x]){
               v.push_back(nums1[i]);
                }
            }
        }
        map<int,int>mpp;
        for(int i=0;i<v.size();i++){
            mpp[v[i]]++;

        }
        vector<int>x;
        for(auto it:mpp){
         x.push_back(it.first);
        }
        return x;
        
    }
};