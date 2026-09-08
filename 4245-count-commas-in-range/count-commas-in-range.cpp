class Solution {
public:
    int countCommas(int n) {
        int original =n;
        int count=0;
        int x=0;
        while(n>0){
            n=n/10;
            count++;
            
        }
        if(count<4){
            x=0;
        } 
        else{
            x=original-1000;
            x=x+1;
        }
          return x;
    }
};