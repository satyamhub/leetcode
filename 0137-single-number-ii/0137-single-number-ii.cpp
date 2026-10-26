class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        
        //Iterating through all 32 bits in all elements in the array
        for(int i=0; i<32; i++){
            int sum=0;  //for counting the ith bit set in all elements

            for(int num:nums){
                //checking the ith bit
                if((num>>i)&1){
                    sum++;
                }
            }

            //if sum is not divisible by 3 then it is set in the number which is single

            if(sum%3!=0){
                // making the ith bit set in ans
                ans=ans | (1<<i);
            }
        }
        return ans;
    }
};