class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int>ans;
        int left=n-1;
        int carry=1;

        while(left>=0){
            int sum=digits[left]+carry;
            carry=sum/10;
            ans.push_back(sum%10);
            left--;
        }
        if(carry!=0)
        ans.push_back(carry);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};