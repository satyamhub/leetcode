class Solution {
public:
    bool isUgly(int n) {
        if(n<1) return false;
        vector<int> divisor(0);
       
        for(long long i=1; i*i<n; i++){
            if(n%i==0){
                divisor.push_back(i);
                
                if(n/i != i){
                divisor.push_back(n/i);
                
            }
            }

        }
        int cntall=0;
        int cntprime=0;
       
        for(auto it:divisor){
            if(it>1){
                  cntall++;
            }
            
            if(it%2==0 || it%3==0 || it%5==0){
                if(it>1){
                     cntprime++;
                }
                
            }
            cout<<it<<endl;
        }
        if(cntall!=cntprime){
            return false;
        }else{
            return true;
        }
        
        
    }
};