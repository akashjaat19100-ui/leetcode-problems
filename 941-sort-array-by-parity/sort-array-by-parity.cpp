class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      int low=0;
      int mid=0;
      int n = nums.size();
      int high=n-1;
      while(mid<=high){
        if(nums[mid]%2!=0){
            swap(nums[mid],nums[high]);
            high--;
        }
        else{
            mid++;
        }
      } 
      return nums; 
    }
};