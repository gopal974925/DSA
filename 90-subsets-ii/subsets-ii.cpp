class Solution {
public:
void sub(vector<int>& nums, int i,vector<int>& ans,vector<vector<int>> &result ){
    int n=nums.size();
    int idx=0;
    if(i==n){
        result.push_back(ans);
        return;
    }
    ans.push_back(nums[i]);
    sub(nums,i+1,ans,result);

    ans.pop_back();
     idx=i+1;
    while(idx<n && nums[idx]==nums[idx-1]){
        idx++;
    }
    sub(nums,idx,ans,result);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        vector<vector<int>>result;
        vector<int>ans;
        sub(nums,i,ans,result);
        return result;
    }
};