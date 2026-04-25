/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(), intervals.end(), [](Interval &a, Interval &b) {
           return a.start < b.start;
        });
        for (int i=0;i<n-1;i++){
            int b=intervals[i].end;
            int c=intervals[i+1].start;
            if (b>c) return 0;
        }
        return 1;
    }
};
