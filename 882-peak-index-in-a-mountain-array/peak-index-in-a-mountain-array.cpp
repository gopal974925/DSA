class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int end=arr.size()-2;
       int st=1;
       while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(arr[mid-1]<arr[mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
       }
       return -1;
    }
};