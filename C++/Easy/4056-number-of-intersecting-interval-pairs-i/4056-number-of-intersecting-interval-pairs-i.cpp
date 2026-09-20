class Solution {
public:
    bool compare(vector<int>& a, vector<int>& b) {
        if (a[0] < b[0])
            return true;

        return a[1] > b[1];
    }
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (max(intervals[i][0], intervals[j][0]) <=
                    min(intervals[i][1], intervals[j][1])) {
                    ans++;
                }
            }
        }
        return ans;
        // sort(intervals.begin(), intervals.end(), compare);
        // int end = intervals[0][1];
        // for (int i = 0; i < n; i++) {
            
        // }
        // return ans == 1 ? 0 : ans;
    }
};

/*
int n=intervals.size();
int ans=0;

for(int i=0; i<n; i++){
for(int j=i+1; j<n; j++){
if(max(intervals[i][0], intervals[j][0])<= min(intervals[i][1],
intervals[j][1])){ ans++;
}

}
}
return ans;

*/