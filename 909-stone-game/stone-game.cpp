class Solution {
public:
     bool stoneGame(vector<int>& piles) {
        int x=0;
        int alicept=0;
        int bobpt=0;
       for(int i=0;i<piles.size();i++){
        if(i%2==0){
        alicept= alicept+piles[i];
       }
       else {
        bobpt=bobpt+piles[i];
       }
    }
        if(alicept>bobpt) {
            x=1;
        }
       else {
        x=0;
       }
   reverse(piles.begin(),piles.end());
      bool stoneGame(vector<int> & piles);
       if(x=1)return true;
       else return false;

    }
};