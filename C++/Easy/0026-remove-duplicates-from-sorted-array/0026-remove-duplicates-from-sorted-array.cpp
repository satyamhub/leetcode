class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
            int n = arr.size();
            int left = 0;
            int right = 0;
            int index=0;
            while(left<=right && right<n){
            if(arr[left]>=arr[right]){
                right++;
            }else{
                swap(arr[left+1], arr[right]);
                left++;
            }
            
        }
        return left+1;
    }
};