class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mpp;
        vector<int>v;
        for(int x:nums2){//2-->1
            mpp[x]++;
        } 
        for(int x:nums1){ //2--->1 >0 v(2) 
            if(mpp[x]>0){
                v.push_back(x);
                mpp[x]--;
            }
        }
    return v;
    }
};