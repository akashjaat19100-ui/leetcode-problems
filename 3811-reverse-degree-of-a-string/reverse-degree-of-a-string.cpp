class Solution {
public:
    int reverseDegree(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
           count = (123-int(s[i]))*(i+1)+count;
        }
        return count;
    }
};