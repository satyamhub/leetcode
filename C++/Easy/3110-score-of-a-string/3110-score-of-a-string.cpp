class Solution {
public:
    int scoreOfString(string s) {
        int n=s.size();
        int score=0;

        for(int i=1; i<n; i++){
            int diff=abs(s[i]-s[i-1]);
            score+=diff;
        }
      
        return score;
    }
};