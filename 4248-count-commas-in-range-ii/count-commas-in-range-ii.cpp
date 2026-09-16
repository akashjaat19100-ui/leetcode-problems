class Solution {
public:
    long long countCommas(long long n) {
        long long original =n;
        long long ans = n;
        long long count=0;
        long long x=0;
        while(n>0){
            n=n/10;
            count++;
            
        }
        if(count<4){
            x=0;
        } 
        else if(count>=4 && count <7){
            x=original-1000;
            x=x+1;
        }
        else if(count>=7&& count<10){
            x= original-1000000;
            x=(x*2);
            x=x+999000;
            x=x+2;
        }
        else if(count>=10&& count<13){
            x = original-1000000000;
            x=(x*3);
            x= x+1998999000;
            x=x+3;
           
        }
        else if(count>=13 && count<16){
           x = original-1000000000000;
            x=(x*4);
            x= x+2998998999000;
            x=x+4;
        }
        else{
            x = original - 1000000000000000;
        x=(x*5);
            x= x+3998998998999000LL;
            x=x+5;
           
        }
       return x;
    }
        
};
