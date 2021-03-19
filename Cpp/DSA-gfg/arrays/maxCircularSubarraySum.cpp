#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int maxCircularSubarraySum(vector<int> v){
    int n = v.size();
    int arraySum = accumulate(v.begin(),v.end(),0);
    int maxSum = 0;
    int minSum=0;
    int currSum = 0;

    for(int i=0;i<n;i++){
        currSum = max(v.at(i), currSum+ v.at(i));
        maxSum = max(currSum,maxSum);
    }
    currSum = 0;
    for(int i=0;i<n;i++){
        currSum = min(v.at(i),currSum+v.at(i));
        minSum = min(currSum,minSum);
    }
    int maxCircularSum = arraySum - minSum;

    return max(maxSum,maxCircularSum);

}

int main(){
    vector<int> v = {10,5,-3,8};
    cout << "max circular subarray sum = "<<maxCircularSubarraySum(v);
    return 0;
}