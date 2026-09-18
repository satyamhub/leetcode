class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int zero=0;

        
        for(int i=0; i<n; i++){
            zero=nums[i]^zero;
            cout<<zero<<endl;
        }
        return zero;
    }
};