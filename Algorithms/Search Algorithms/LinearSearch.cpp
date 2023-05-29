#include<bits/stdc++.h>
using namespace std;

int linearSearch(int  arr[],int key){
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={2,5,6,1,8};
    int key=6;

    cout<<linearSearch(arr,key)<<endl;
}