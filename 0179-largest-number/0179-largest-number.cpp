class Solution {
public:
    string largestNumber(vector<int>& nums) {

        vector<string> s;

        // Convert integers to strings
        for (int x : nums) {
            s.push_back(to_string(x));
        }

        // Custom sort
        sort(s.begin(), s.end(), [](string a, string b) {
            return a + b > b + a;
        });

        // If all numbers are 0
        if (s[0] == "0")
            return "0";

        // Join all strings
        string ans = "";
        for (string x : s) {
            ans += x;
        }

        return ans;
    }
};