class Solution {
public:
    string largestGoodInteger(string num) {
        int mx = -1;
        string ans = "";
        for (int i = 0; i < num.size() - 2; i++) {
            if (num[i] == num[i+1] && num[i+1] == num[i+2]) {
                string curStr = string(1, num[i]) + string(1, num[i+1]) + string(1, num[i+2]);
                int curNum = stoi(curStr);
                if (curNum > mx) {
                    mx = curNum;
                    ans = curStr;
                }
            }
        }
        return ans;
    }
};
