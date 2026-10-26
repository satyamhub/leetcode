class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorr=0;

        //Doing Xorr of each number
        for(int num: nums){
            xorr = xorr ^ num;
        }

        //creating the rightmost set bit of the xorr

        long long rightMost = (xorr & (xorr-1)) ^ xorr;

        int b1=0;   //bucket to store whose rightmost bit is set

        int b2=0;   // bucket to store whose rightmost bit is not set

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