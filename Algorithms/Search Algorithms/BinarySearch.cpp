#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int key,int start, int end){
    while(start<end){
        int mid=(start+end)/2;

        if(arr[mid]==key)
        return mid;

        else if(arr[mid]>key)
        binarySearch(arr,key,start,mid-1);

        else if(arr[mid]<key)
        binarySearch(arr,key,mid+1,end);
    }
    return -1;
}

int main(){
    int arr[]={2,5,6,1,8};
    int key=6;
    int start=0,end=4;

    cout<<binarySearch(arr,key,start,end)<<endl;
}