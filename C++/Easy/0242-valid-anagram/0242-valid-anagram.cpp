class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>mpp(0);
        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++;
            cout<<mpp[s[i]]<<endl;
        }

        for(int i=0; i<t.size(); i++){
            if(mpp[t[i]]==0){
                return false;
            }
            mpp[t[i]]--;
        }
      for(auto it: mpp){
        if(it.second!=0){
            return false;
        }
      }
      return true;
             
    }
};