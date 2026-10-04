class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>spiral(n, vector<int>(n));;
        int cnt=1;
        int top=0;
        int bottom = n-1;
        int right=n-1;
        int left=0;
        while(top<=bottom&&left<=right){
            for(int j = left;j<=right;j++){
                spiral[top][j]=cnt++;
                
            }top++;
            for(int i= top;i<=bottom;i++){
                spiral[i][right]=cnt++;
                
               
            } right--;
            if(top<=bottom){
                for(int j = right ;j>=left;j--){
                   spiral[bottom][j]=cnt++;
                
               
                } bottom--;
            }
                if(left<=right){
                for(int i = bottom ;i>=top;i--){
                    spiral[i][left]=cnt++;
                
              
                }left++;
            }

        }
        return spiral;

    }
};