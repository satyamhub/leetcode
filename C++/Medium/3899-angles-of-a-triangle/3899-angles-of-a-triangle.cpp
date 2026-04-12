/*
I wil get the largest side by sorting the sides,
then i will check if sum of two smallest side should be
greater than largest side.

then I will calculate angle 1
cos(c)= a*a+b*b-c*c/2*a*b
then i will take inverse of the cos(theta) and change it into
degree by multiply by 180.0 
*/


class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        sort(sides.begin(),sides.end());
        vector<double>ans;
        double a=sides[0];
        double b=sides[1];
        double c=sides[2];  //Largest Side.

        if(c>=a+b){
            return ans;
        }
        
        double angle1=acos(((a*a)+(b*b)-(c*c))/(2*a*b)) * (180.0 / M_PI);
        double angle2=acos(((b*b)+(c*c)-(a*a))/(2*b*c)) * (180.0 / M_PI);
        double angle3=180-(angle1+angle2);
        ans.push_back(angle1);
        ans.push_back(angle2);
        ans.push_back(angle3);
        sort(ans.begin(),ans.end());

        return ans;
        
    }
};