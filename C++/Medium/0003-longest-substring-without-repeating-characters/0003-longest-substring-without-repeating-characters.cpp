class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int maxi=0;
        int cnt=0;
        int right=0;
        int left=0;
        unordered_map<int,int> mpp;

        while(right<n){
            char ch=s[right];
            if(mpp[ch]!=0){
                if(mpp[ch]>left){
                    left=mpp[ch];
                    cnt=right-left+1;
                }
            }
            
            maxi=max(maxi,right-left+1);
            mpp[ch]=right+1;
            cout<<mpp[ch]<<endl;
            right++;
        }
       return maxi;
        
    }
};