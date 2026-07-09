#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=7;
    int high=n-1;
    int low=0;
    for(int i=0;i<n;i++){
        int mid=low+(low-high)/2;
        if(arr[mid]==target){
            cout<<"element found at index "<<mid;
            return 0;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<"element not found";
    return 0;
}
