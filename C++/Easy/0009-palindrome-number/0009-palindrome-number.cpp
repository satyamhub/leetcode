class Solution {
public:
    bool isPalindrome(int x) {
        int og=x;
        int ans=0;
        while(x>0){
            int lastdigit=x%10;
            x=x/10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                return false;
            }
            ans=ans*10+lastdigit;
        }
        if(ans==og){
            return true;
        }else{
            return false;
        }
    }
};