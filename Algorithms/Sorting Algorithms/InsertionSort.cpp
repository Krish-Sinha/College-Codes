#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int N){
    int key,j;
    for(int i=1;i<N;i++){
        int key=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=key;
    }
    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr[]={5, 1, 4, 9, 8};
    int N=sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,N);
}