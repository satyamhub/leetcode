class Solution {
public:
    string frequencySort(string s) {
        vector<int> freq(256, 0);

        for(char ch : s) {
            freq[ch]++;
        }

        vector<pair<int, char>> arr;

        for(int i = 0; i < 256; i++) {
            if(freq[i] > 0) {
                arr.push_back({freq[i], (char)i});
            }
        }

        sort(arr.rbegin(), arr.rend());

        string ans = "";

        for(auto &p : arr) {
            ans.append(p.first, p.second);
        }

        return ans;
    }
};