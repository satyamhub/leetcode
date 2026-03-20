class Solution {
public:
    int pivotInteger(int n) {
        for(int i=1; i<=n; i++){
            int leftSum=i*(i+1)/2;
            int rightSum=n*(n+1)/2-leftSum+i;
            if(leftSum==rightSum) return i;
        }


        return -1;
    }
};