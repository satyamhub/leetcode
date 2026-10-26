class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorr=0;

        for(int num: nums){
            xorr = xorr ^ num;
        }

        long long rightMost = (xorr & (xorr-1)) ^ xorr;

        int b1=0;

        int b2=0;

        for(int num: nums){
            if(num & rightMost){
                b1^=num;
            }else{
                b2^=num;
            }
        }
        return {b1, b2};
    }
};