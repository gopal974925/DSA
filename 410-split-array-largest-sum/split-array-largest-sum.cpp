class Solution {
public:

bool isvaild(vector<int>& nums,int k,int maxA){
    int st=1,p=0;

    for(int i=0;i<nums.size();i++){
        if(nums[i]>maxA){
            return false;
        }

        if(p+nums[i]<=maxA){
            p+=nums[i];
        }
        else{
            st++;
            p=nums[i];
        }
    }
    return st > k ? false : true;
}
    int splitArray(vector<int>& nums, int k) {
        int min=0,ans=0;
    int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int st=0,end=sum;

        while(st<=end){
            int mid=st+(end-st)/2;

            if(isvaild(nums,k,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }

        return ans;
    }
    
};