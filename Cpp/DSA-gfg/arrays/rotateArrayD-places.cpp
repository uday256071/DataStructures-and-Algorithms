#include <iostream>
#include <algorithm>

using namespace std;

void reverse(int arr[],int low,int high);
void leftRotateByD (int arr[],int n, int d);


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    leftRotateByD(arr,n,3);
    for(auto i:arr){
        cout << i << " ";
    }
    cout << endl;  
    return 0;
}

void leftRotateByD (int arr[],int n, int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

void reverse(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}