class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();

        vector<int> ans;
        
        int left = 0, right = column - 1;
        int top = 0, bottom = row - 1;

        while (left <= right && top <= bottom) {

            // left → right
            for (int i = left; i <= right; i++)
                ans.push_back(matrix[top][i]);
            top++;

            // top → bottom
            for (int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);
            right--;

            // right → left
            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    ans.push_back(matrix[bottom][i]);
                bottom--;
            }

            // bottom → top
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }

        return ans;
    }
};