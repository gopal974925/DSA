class Solution {
public:
    bool isValid(vector<int>& p, int m, int mid) {
        int count = 1;          
        int last = p[0];

        for (int i = 1; i < p.size(); i++) {
            if (p[i] - last >= mid) {
                count++;
                last = p[i];
            }
            if (count >= m) {
                return true;
            }
        }
        return false;
    }

    int maxDistance(vector<int>& p, int m) {
        sort(p.begin(), p.end());

        int st = 1;
        int end = p.back() - p.front();
        int ans = 0;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (isValid(p, m, mid)) {
                ans = mid;
                st = mid + 1;       
            }
            else {
                end = mid - 1;      
            }
        }

        return ans;
    }
};
