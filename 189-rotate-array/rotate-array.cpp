class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int x=0;
        vector<int>ans(n);
         k=k%n;
        for(int i=0;i<n;i++){
          if((i+k)>(n-1)){
            x=i;
            break;
          }
        } 
        for(int i=0;i<n;i++)  {
            if((i+k)<=(n-1)){
              ans[i+k]=nums[i];
            }
            else {
                ans[i-x]=nums[i];
            }
        }
        nums=ans;
         }
};