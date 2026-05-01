class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
    //     int n1=str1.size();
    //     int n2=str2.size();

    //     string ans="";
    //     ans.push_back(str2[0]);
        
    //     for(int i=1; i<n2; i++){
    //        if(ans[0]==str2[i]) break;
    //        ans.push_back(str2[i]);
    //     }
    //     int left=0;
    //     int right=ans.size();

    //     while(left<n1 && right<n1){
    //         if(str1[left]==str1[right]){
    //             left++;
    //             right++;
    //         }else{
    //             return "";
    //         }
    //     }


    //     left=0;
    //     right=ans.size();

    //     while(left<n2 && right<n2){
    //         if(str2[left]==str2[right]){
    //             left++;
    //             right++;
    //         }else{
    //             return "";
    //         }
    //     }
    //   if(n1==n2 && str1!=str2) return "";
    //   string og=str2;
      
    //   for(int i=1; i<(right/ans.size()); i++){
    //     str2+=str2;
    //   }
    //   if(str1==str2) return og;

    //   return ans;



//    ----------------------
    return (str1 + str2 == str2 + str1)? 
    str1.substr(0, gcd(size(str1),size(str2))): "";

        
    }
};