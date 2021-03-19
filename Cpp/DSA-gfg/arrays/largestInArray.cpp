#include <iostream>

using namespace std;

int getLargest(int arr[], int n){
    int num = arr[0];
    for(int i=1;i<n;i++){
        if (arr[i]> num){
            num = arr[i];
            }
    }
    return num;
}

int main (){
    int arr[] = {10,5, 65,85,96,2};
    // int arr[]={};
    int n = sizeof(arr)/sizeof(int);

    cout << getLargest(arr,n);

    return 0;
}