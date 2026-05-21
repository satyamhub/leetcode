class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        //----Brute----

        // int n=nums.size();
        // vector<int>ans;
        // map<int,int>mpp;
        // for(int i=0; i<n; i++){
        //     if(mpp[nums[i]]>0){
        //         ans.push_back(nums[i]);
        //     }else{
        //         mpp[nums[i]]++;
        //     }
        // }
        // return ans;

        //----Optimal----
        int n=nums.size();
        vector<int>ans;

        for(int i=0; i<n; i++){
            int num=abs(nums[i]);

            int index=num-1;

            if(nums[index] < 0){
                ans.push_back(num);
            }else{
                nums[index]*=-1;
            }
        }
        return ans;
    }
};