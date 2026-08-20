class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int product=1;
        int flag=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                product*=nums[i];
            }else{
                flag+=1;
            }
        }
 
        if(flag>1) return ans;
        if(flag) {
            for(int i=0; i<n; i++){
                if(nums[i]==0){
                    ans[i]=product;
                }
            }
            return ans;
        }

        for(int i=0; i<n; i++){
          
           ans[i]=product/nums[i];
                
        }
        return ans;
    }
};