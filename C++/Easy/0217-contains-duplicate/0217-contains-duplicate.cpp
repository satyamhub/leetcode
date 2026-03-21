class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        return numSet.size() < nums.size(); 

        
        // int n=nums.size();
        // unordered_map<int,int>mpp; //Space : O(N)
        // for(int num: nums){    //time O(N)
        //     mpp[num]++;     
        //     if(mpp[num]>=2){
        //         return true;
        //     }
        // }
        // return false;
         
        
    }
};