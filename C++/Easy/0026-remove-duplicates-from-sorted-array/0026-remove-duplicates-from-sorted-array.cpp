class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
            int n = arr.size();
            int left = 0;
            int right = 1;
            int index=0;
            while(left<=right && right<n){
                if(arr[left]!=arr[right]){
                    left++;
                    arr[left]=arr[right];
                }
                right++;
          }
        return left+1;
    }
};