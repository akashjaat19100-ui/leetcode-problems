class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<pair<int,int>>v;
        for(int i=0;i<height.size();i++){
            v.push_back({height[i],i});
        }
        int n=v.size();
        int maxwater =0;
         int left=0;
       int right=n-1;
       while(left<right){
          int sum= min(v[left].first,v[right].first)*abs((v[left].second)-(v[right].second));
        maxwater=max(maxwater,sum);
        if(v[left].first<v[right].first){
            left++;
        }
        else{
            right--;
        }
       }
       return maxwater;
        
      
    }
};