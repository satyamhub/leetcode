
class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n = rain.size();

        int alice = 0, bob = 0;
        vector<string> ans(n, "None");

        for (int i = 0; i < n; i++) {

            if (rain[i] == 0) {
                ans[i] = "None";
            }

            else if (i + 1 < n && rain[i + 1] == 1) {

                if (alice <= bob) {
                    ans[i] = "Alice";
                    alice++;
                }
                else {
                    ans[i] = "Bob";
                    bob++;
                }
            }

            else {
                ans[i] = "Bob";
                bob++;
            }
        }

        return ans;
    }
};
