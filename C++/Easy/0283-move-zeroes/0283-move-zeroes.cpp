class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++){

            int pointer=0;
            while(pointer<n-1){
                if(nums[pointer]==0 && nums[pointer+1]!=0){
                    swap(nums[pointer],nums[pointer+1]);
                }
                pointer++;
            }
        }
    }
};