#include <iostream>
#include <stdio.h>

using namespace std;

int secondLargest(int arr[],int n){

    int max=0;
    int secondMax=-1;

    for(int i=1;i<n;i++){
        if (arr[i]>arr[max]){
            secondMax=max;
            max=i;
            printf("max-> %d , second max -> %d \n",max,secondMax);
            printf("%d \n",arr[secondMax]);
        }else if(arr[i]<arr[max]){
            if (secondMax == -1 || arr[i]>arr[secondMax]){
                secondMax = i;
            }
        }
    }
    if (arr[max]==arr[secondMax]){
        return -1;
    } else {
        return secondMax;
    }
}
int main(){

    int arr[]={2,5,62,8,9,126,6,23};
    // int arr[]={2,5,62,126,9,126,6,23};
    // int arr[]={10,10,10};
    // int arr[]={};
    // int arr[]={5};
    // int arr[]={12,7,12,7};

    int n = sizeof(arr)/sizeof(int);
    int out = secondLargest(arr,n);
    if (out){
        cout << arr[secondLargest(arr,n)];
    }
    return 0;
}