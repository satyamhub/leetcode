class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        
        int m=mpp.size();
        vector<vector<int>> count(m, vector<int>(2, 0));
        int i=0;
        for(auto it:mpp){
            int el=it.first;
            int freq=it.second;
            count[i][0]=freq;
            count[i][1]=el;
            i++;
        }

        sort(count.begin(), count.end());

        vector<int>ans;
        for(int i=m-1; i>=0; i--){
            ans.push_back(count[i][1]);
            k--;
            if(k==0) break;
        }
        return ans;
    }
};