class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        long long ans = 0;
        sort(intervals.begin(), intervals.end());
        int left = 0;
        int right = n - 1;

        while (left < right) {
            
            int l = left;
            int r = right;
            
            int idx=-1;
            int mid;
            while (l <= r) {
                mid = l + (r - l) / 2;
                if (max(intervals[left][0], intervals[mid][0]) >
                    min(intervals[left][1], intervals[mid][1])){
                        r=mid-1;
                    }else{
                        idx=mid;
                        l=mid+1;
                    }
            }
            ans += r - left;
            left++;
        }
        return ans;
    }

    /* vector<pair<int>> events;
    // for(vector<int>& interval: intervals){
    //     int start=interval[0];
    //     int end=interval[1]+1;

    //     events.push_back({start, 1});
            events.push_back({end, -1});
        }
        sort(events.begin(), events.end());
        int count=0; int res=0;
        for(int i=0; i<m; i++){
            if(events[i].second==1){
                count++;
                res+=(count-1);
            }
        }
     }*/
};

/*

sort(intervals.begin(), intervals.end());
int left=0;
int right=n-1;

while(left<right){
if (max(intervals[left][0], intervals[right][0]) <=
                    min(intervals[left][1], intervals[right][1])) {

                    ans+=right-left+1;
                    left++;
                    right=n;
                }
                right--;

}
return ans;

*/