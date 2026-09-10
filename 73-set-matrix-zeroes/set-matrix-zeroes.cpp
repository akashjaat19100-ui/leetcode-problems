class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int>v,r;
        for(int i =0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                   v.insert(i);
                   r.insert(j);
                }
            }
        }
        
       for(int i =0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(v.count(i)||r.count(j)){
                    matrix[i][j]=0;
                }
            }
       }
    }
};