class Solution {
public:
    int m;
    void solve(int left, int right, string &temp, vector<string>& res){

        if(temp.size() == 2*m){
            if(left-right != 0)  return;
            res.push_back(temp);
            return;
        }

        temp.push_back('(');
        solve(left+1, right, temp, res);
        temp.pop_back();

        if(right < left){
            temp.push_back(')');
            solve(left, right+1, temp, res);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        m=n;
        vector<string> res;

        string temp="";
        solve(0, 0, temp, res);

        return res;
    }
};