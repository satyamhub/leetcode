class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       int mask=0;
       for(char c: allowed){
        mask |=(1<<(c-'a'));
       }

       int cnt=0; //counting which is not allowed
       for(string word: words){
          for(char ch: word){
            if((mask>>(ch-'a')&1)==0){   //sliding mask value to extreme left ans taking AND with 1.
                cnt++;
                break;
            }
          }
       }
       return words.size()-cnt;   // returning total - not allowed
    }
};