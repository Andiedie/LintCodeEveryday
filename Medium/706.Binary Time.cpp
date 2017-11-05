class Solution {
public:
    /*
    * @param : the number of "1"s on a given timetable
    * @return: all possible time
    */
    vector<string> binaryTime(int num) {
        // Write your code here
        vector<string> res;
        int number[60];
        for (int i = 0; i < 60; i++) {
            int count = 0;
            int num = i;
            while (num) {
                num &= (num - 1);
                count++;
            }
            number[i] = count;
        }
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 60; j++) {
                if (number[i] + number[j] == num) {
                    string hour = to_string(i);
                    string minute = to_string(j);
                    if (minute.length() == 1) minute = "0" + minute;
                    res.push_back(hour + ":" + minute);
                }
            }
        }
        return res;
    }
};
