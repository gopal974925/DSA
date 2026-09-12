#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int arr[]={4,3,2,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool swapped;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}