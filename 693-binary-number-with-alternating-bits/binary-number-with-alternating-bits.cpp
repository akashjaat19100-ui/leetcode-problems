class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int>v;
     while(n>0){
        v.emplace_back(n&1);
        n=n>>1;
     }
     int left=0;
     int right=1;
     int z=v.size();
     while(right<z){
        if(v[left]==v[right])return false;
        else {left++;
        right++;}
     }
     return true;
     
    }

};