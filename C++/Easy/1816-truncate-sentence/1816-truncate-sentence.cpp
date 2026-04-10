class Solution {
public:
    string truncateSentence(string s, int k) {
        int n=s.size();
        int space=0;
        string ans;
        int i=0;
        for(char ch:s){
            if(ch==' '){
                space++;
            }
            if(space==k){
                break;
            }
            ans.push_back(ch);
            i++;
        }
        return ans;
    }
};