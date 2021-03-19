#include <iostream>
#include <vector>
// #include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

// vector<int> reverseArray(vector<int> v){
//     int n = v.size();
//     int temp;
//     for(int i = 0;i<n/2;i++){
//         temp = v.at(i);
//         v.at(i)= v.at(n-1-i);
//         v.at(n-1-i)= temp;      
//     }
//     return v;
// }

vector<int> reverseArray(vector<int> v){   //better way  - high and low and meeting in middle
    int n = v.size();
    int low=0;
    int temp=0;
    int high =n-1;
    while(low<high){
        temp=v.at(low);
        v.at(low)=v.at(high);
        v.at(high)= temp;
        low +=1;
        high -=1;
    }
    return v;
}

int main(){
    vector<int> v = {2,5,65,84,2,6,95,5};
    vector<int> revArr = reverseArray(v);
    //  reverse(v.begin(),v.end());
    for(auto &it:revArr){
        cout << it <<" ";
    }
    cout << endl;
    return 0;
}