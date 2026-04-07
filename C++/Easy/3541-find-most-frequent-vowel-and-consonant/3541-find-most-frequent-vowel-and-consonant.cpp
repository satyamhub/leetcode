class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<int,int>mpp;
        for(char ch:s){
            mpp[ch-'a'+1]++;
        }
        cout<<mpp[21];
        int maxVowelFreq=0;
        int maxConsonantFreq=0;
        for(auto ch: mpp){
            if(ch.first==1 || ch.first==5 || ch.first==9 || ch.first==15 || ch.first==21){
                maxVowelFreq=max(ch.second,maxVowelFreq);
            }else{
                maxConsonantFreq=max(maxConsonantFreq,ch.second);
            }

        }
        return maxVowelFreq + maxConsonantFreq;
    }
};