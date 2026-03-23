class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int maxi=0;
        
        
        for(int i=0; i<n; i++){
            unordered_map<int,int> mpp;
            int cnt=0;
            for(int j=i; j<n; j++){
                char ch=s[j];
                if(mpp[ch]>0){
                    i=j-1;
                    break;
                }
                mpp[ch]++;
                cnt++;
            }
            cout<<cnt<<endl;
            maxi=max(maxi,cnt);
        }
       return maxi;
        
    }
};