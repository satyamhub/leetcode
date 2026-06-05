class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int left=0;
        int right=0;
        vector<int> hash(256, -1);
        
        int maxlen=0;

        while(right<n){
            if(hash[s[right]]!=-1){
                if(hash[s[right]]>=left){
                    left=hash[s[right]]+1;
                }
            }
            int len=right-left+1;
            maxlen=max(maxlen,len);
            hash[s[right]]=right;
            right++;
        }
        return maxlen;
    
    }
};