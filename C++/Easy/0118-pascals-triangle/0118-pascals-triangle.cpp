 vector<int> generateRow(int row){
        long long ans=1;
        vector<int>ansRow;
        ansRow.push_back(1);

        for(int col=0; col<row; col++){
            ans=ans*(row-col);
            ans=(ans)/(col+1);
            ansRow.push_back(ans);
        }
        return ansRow;
}
class Solution {
public:

   

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal(0);
        for(int i=0; i<numRows; i++){

            pascal.push_back(generateRow(i));
        }


        return pascal;
    }
};