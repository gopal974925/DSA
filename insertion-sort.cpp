#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,2,1,3};
    int current;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        int prev=i-1;
            current=arr[i];
        while(prev>=0 && arr[prev]>current){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;
    }

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}