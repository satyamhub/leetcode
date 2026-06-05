/*
Approach:
1. I will create a hash array of 256 size with all
   equal to -1.

2. I will put a pointer left at 0 and right moving 
   from 0 to N.

3. ALso i will put the ascii value of the char to 
   its position in string in array.

4. Whenever right pointer finds the repeating 
   char, it will move left pointer to one ahead of 
   repeating char. Also update current to hash.

5. len=right-left+1, update to maxlen.

TC:O(N)
SC:O(1)
*/

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