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
        /*
        Index position ko negative krdiya hu
        Jaise 1st number 4 hai to 4th index pe jo hoga usko negative krdiya hu
        Fir aage badhte badhte agar firse 4 aya to 4th index pe check krungaa ki wo negative hai phle se to samjh jaunga ki wo phle v aya thaa
        To usko answer me push krdunga
        Aur agar negative nhi hai to usko negative bnaa dunga
        */
        
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