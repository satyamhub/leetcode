/*
Aprroach 1:
I will Count The sum upto n natural numbers, and also count
the sum of array.
Also i will the number which is repeating.
after that i wlll subtract the totalsum-arraysum.
i will get the missing number.

sum of 6 natural number =21
sum of array is= 17
repeating =1
missing =total-(array sum-repeating)=21-(17-1) = 5

TC: O(N)
SC: O(N)

*/
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        vector<int>ans;
        int totalSum=n*(n+1)/2;
        int numsSum=0;
        int repeating=0;

        for(int num:nums){
            numsSum+=num;
            mpp[num]++;
            if(mpp[num]==2){
                repeating=num;
                ans.push_back(num);
                break;
            }
            
        }

        int missing=totalSum-(numsSum-repeating);
        ans.push_back(missing);

        return ans;

    }
};