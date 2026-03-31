class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int column=matrix[0].size();
        int row=matrix.size();
        cout<<row<<"  "<<column;
        vector<vector<int>> temp=matrix;

        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                if(matrix[i][j]==0){
                    for(int k=0; k<row; k++){
                        temp[k][j]=0;

                    }
                    for(int k=0; k<column; k++){
                        temp[i][k]=0;

                    }
                }  
            }
        }
        matrix=temp;
       
    }
};