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
    /*
    * @param intervals: Sorted interval list.
    * @param newInterval: new interval.
    * @return: A new interval list.
    */

    vector<Interval> insert(vector<Interval> intervals, Interval newInterval) {
        // write your code here
        auto it = intervals.begin();
        while (it != intervals.end()) {
            if (overlap(*it, newInterval)) {
                if (newInterval.start < it->start) {
                    it->start = newInterval.start;
                }
                if (newInterval.end > it->end) {
                    it->end = newInterval.end;
                    if ((it + 1) != intervals.end() && it->end >= (it + 1)->start) {
                        it->end = it->end > (it + 1)->end ? it->end : (it + 1)->end;
                        intervals.erase(it + 1);
                    }
                }
                return intervals;
            }
            if (newInterval.start < it->start) {
                intervals.insert(it, newInterval);
                return intervals;
            }
            it++;
        }
        intervals.insert(intervals.end(), newInterval);
        return intervals;
    }
    bool overlap(Interval a, Interval b) {
        return a.start <= b.end && a.end >= b.start;
    }
};
