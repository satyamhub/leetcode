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
/*
Approach:2
I will Find Sn=n*(n+1)/2=21 And S2N=(n(n+1)(2n+1))/6 =91
Also I will find The sum of array(SN).Also Sum of Squares of the each number(S2N)
lets take mssing=x
repeating=y

SN-Snums=x-y=4
s2N-S2Nums=x^2-y^2=24
so, (x+y)(x-y)=24
     x+y=24/4=6
    so, x+y=6
        x-y=4
        2x=10
        x=5 --missing
        y=x-4=5-4=1 --->repeating

        TC:O(N)
        SC:0(1)


*/
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        //-----------Approach 1(Better)------------
        // int n=nums.size();
        // unordered_map<int,int>mpp;
        // vector<int>ans;
        // int totalSum=n*(n+1)/2;
        // int numsSum=0;
        // int repeating=0;

        // for(int num:nums){
        //     numsSum+=num;
        //     mpp[num]++;
        //     if(mpp[num]==2){
        //         repeating=num;
        //         ans.push_back(num);
        //         break;
        //     }
            
        // }

        // int missing=totalSum-(numsSum-repeating);
        // ans.push_back(missing);

        // return ans;
      
      //-----------Approach 2(Optimal 1)--------------

      long long n=nums.size();
      long long SN=(n*(n+1))/2;
      long long S2N=(n*(n+1)*(2*n+1))/6;
      long long Snums=0;  
      long long S2nums=0; //sum of squares
      
      for(long long num:nums){
        Snums+=num;
        S2nums+=(long long)num*(long long)num;
      }

      long long val1=(long long)SN-(long long)Snums;   // x+y=4
      long long val2=((long long)S2N-(long long)S2nums)/val1;  //(x^2-y^2/4)=24/4=6
     
      long long missing=(val1+val2)/2;   //x=(6+4)/2=5
      long long repeating=missing-val1;

      return {(int)repeating,(int)missing};
    }
};