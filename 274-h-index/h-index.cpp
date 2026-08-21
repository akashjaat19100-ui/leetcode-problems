class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        sort(citations.begin(),citations.end());
        int count =0;
        for(int i=0;i<citations.size();i++){
            count = n -i;
            if(citations[i]>=count){
                return count;
            }
        }
        return 0;
    }
};