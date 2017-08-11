/**
* Definition of Interval:
* classs Interval {
*     int start, end;
*     Interval(int start, int end) {
*         this->start = start;
*         this->end = end;
*     }
*/
class Solution {
public:
    /**
    * @param intervals: interval list.
    * @return: A new interval list.
    */
    vector<Interval> merge(vector<Interval> &intervals) {
        // write your code here
        vector<Interval> ans;
        auto it = intervals.begin();
        while (it != intervals.end()) {
            bool isMerge = false;
            int begin = -1, end = -1;
            for (int i = 0; i < ans.size(); i++) {
                if (it->start <= ans[i].end) {
                    begin = i;
                    break;
                }
            }
            for (int i = ans.size() - 1; i >= 0; i--) {
                if (it->end >= ans[i].start) {
                    end = i;
                    break;
                }
            }
            if (begin != -1 && end != -1 && end >= begin) {
                isMerge = true;
                ans[begin].start = min(ans[begin].start, it->start);
                ans[begin].end = max(ans[end].end, it->end);
                int count = end - begin;
                auto it = ans.begin() + begin + 1;
                while (count--) {
                    it = ans.erase(it);
                }
            }
            it++;
            if (isMerge) continue;
            if (begin != -1)
                ans.insert(ans.begin() + begin, *(it - 1));
            else
                ans.push_back(*(it - 1));
        }
        return ans;
    }
};
