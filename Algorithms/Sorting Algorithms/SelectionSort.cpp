#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++) {
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
   }

   cout<<"Final Array:";
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}

int main(){
    int arr[10],n;

    cout<<"Enter the size of array:";
    cin>>n;

    cout<<"Enter the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SelectionSort(arr,n);
}