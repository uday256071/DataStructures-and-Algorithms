#include<iostream>

using namespace std;

bool checkSorted(int arr[], int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[]={2,5,15,9,11};
    int n = sizeof(arr)/sizeof(int);
    if(checkSorted(arr,n)){
        printf("array is sorted\n");
    }else{
         printf("array is not sorted\n");
    }
    return 0;
}