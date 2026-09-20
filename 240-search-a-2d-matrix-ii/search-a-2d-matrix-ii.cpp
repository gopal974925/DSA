class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mt, int t) {
        int m=mt.size(),n=mt[0].size();
        int r=0,c=n-1;
        while(c>=0 && r<m){
            if(mt[r][c]==t){
                return true;
            }
            else if(mt[r][c]>t){
                c--;
            }
            else{
                r++;
            }
        }
        return false;
    }
};