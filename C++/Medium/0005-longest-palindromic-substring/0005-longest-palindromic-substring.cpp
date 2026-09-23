class Solution {
public:
    bool check_palindrome(string &s, int left, int right){
        while(left<=right){
            if(s[left++]!=s[right--]){
                return false;
            }
            
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n=s.size();
        if(n<=1) return s;

        int start=0;
        int end=0;

        int size=0;

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int left=i;
                int right=j;
                int curr_size=right-left+1;
                if(curr_size>=size && check_palindrome(s, left, right)){
                    size=curr_size;
                    start=left;
                    end=right;
                }

            }
        }
        return s.substr(start, end-start+1);
        
    }
};