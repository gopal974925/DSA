class Solution {
public:
    bool digitCount(string num) {
        int count[10] = {0};

        // Count frequency of each digit
        for (char c : num) {
            count[c - '0']++;
        }

        // Check if num[i] equals frequency of digit i
        for (int i = 0; i < num.size(); i++) {
            if (num[i] - '0' != count[i]) {
                return false;
            }
        }

        return true;
    }
};
