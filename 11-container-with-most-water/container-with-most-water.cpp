class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0,rp=height.size()-1,maxarea=0,hg=0,wd=0;
        while(lp<rp){
            hg=min(height[lp],height[rp]);
            wd=rp-lp;
            int currentwater=hg*wd;
            maxarea = max(maxarea,currentwater);

            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxarea;
    }
};