class Solution {
public:
    int addDigits(int num) {
        

        while(log10(num)>=1){
            int sum=0;
            while(num>0){
            int digit=num%10;
            sum+=digit;
            num/=10;
            }
            
            num=sum;
        }
        return num;
    
    }
};