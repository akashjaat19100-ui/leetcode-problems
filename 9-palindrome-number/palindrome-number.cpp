class Solution {
public:
    bool isPalindrome(int x) {
        vector<int>v;
        if(x<0){
            return false;
        }
        
        while(x>0){
            int digit = x%10;
            v.push_back(digit);
            x = x/10;
        }
        int left=0;
        int right=v.size()-1;
        while(left<=right){
            if(v[left]!=v[right]){
                return false;
            }
            left++;
            right--;
           
        }
        return true;
    }
};