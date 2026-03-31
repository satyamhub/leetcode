class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int column=matrix[0].size();

        //revrse
        for(int i=0; i<(row/2); i++){
            for(int j=0; j<column; j++){
                swap(matrix[i][j],matrix[row-i-1][j]);
            }
        }
        
        //transpose
        for(int i=0; i<row-1; i++){
            for(int j=i+1; j<column; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        
        
    }
};