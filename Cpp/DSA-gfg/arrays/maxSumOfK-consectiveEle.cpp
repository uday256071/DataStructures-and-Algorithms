#include <iostream>
#include <vector>

using namespace std;

//Sliding window technique
int maxSumKconsecutiveEle(vector<int> v,int k){
    int p1,p2,maxSum=0,sum =0;
    int n= v.size();

    if(n<k || k==0) return 0;

    for(int i=0;i<k;i++){
        sum+= v.at(i);
    }
    for(int i=1;i<n-k;i++){
        sum= sum +v.at(i+k-1)-v.at(i-1);
        maxSum = max(sum,maxSum);
        // cout << i << " -> "<<sum <<" "<<maxSum << endl; 
    }
    return maxSum;
}

int main(){
    //  https://ide.geeksforgeeks.org/QSMe98qHhN
    vector<int> v = {5,-2,8,6,4,12,-8,3};
    cout <<"Maximum sum of K consecutive element = "<< maxSumKconsecutiveEle(v,3);
}