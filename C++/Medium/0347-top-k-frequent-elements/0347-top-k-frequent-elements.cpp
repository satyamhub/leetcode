/*
I will use hash map to store the frequency of each element.
Then i will return the ans.


*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        vector<int> ans;
        
        //Inserting in Map with freq.
        for (int num : nums) {
            mpp[num]++;
        }

        vector<vector<int>> count;
        //inserting map in 2d vector=[freq][element]
        for (auto it : mpp) {
            count.push_back({it.second, it.first});
        }
        
        //sorting the count in ascending order.
        sort(count.begin(), count.end());

        //checking the count vector in cout
        for (int i = 0; i < count.size(); i++) {
            cout << count[i][0] << " " << count[i][1] << endl;
        }
        
        //pushing count from end in ans vector
        for (int i = 0; i < k ;i++) {
            ans.push_back(count[count.size()-1-i][1]);
        }

        return ans;
    }
};