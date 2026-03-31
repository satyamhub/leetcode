class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int column=matrix[0].size();
        
        int tempRow[200]={0};
        int tempColumn[200]={0};

        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                if(matrix[i][j]==0){
                   tempColumn[j]=-1;
                   tempRow[i]=-1;
                }  
            }
        }

        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                if(tempRow[i]==-1 || tempColumn[j]==-1){
                    matrix[i][j]=0;
                }
            }
        }
        
       
    }
};