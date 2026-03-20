class Solution {
public:
    bool isPalindrome(string s){
        int n=s.size();
       // if(n==1) return true;
        int left=0;
        int right=n-1;
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;

        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0; i<n; i++){
            if(isPalindrome(words[i])){
                return words[i];
            }
          
            
        }
        return "";

        
    }
};