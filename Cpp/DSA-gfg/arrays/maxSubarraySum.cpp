#include <iostream>
#include <vector>

using namespace std;

int maxSubarraySum(vector<int> v){
    int n = v.size();
    int maxSum =0;
    int currSum =0;

    for(int i =0;i<n;i++){
        if(currSum+v.at(i)<0){
            currSum =0;
        }else{
            maxSum = max(maxSum,currSum+v.at(i));
            currSum = currSum+ v.at(i);
        }
    }
    return maxSum;
}

int maxSubarraySum1(vector<int> v){   // Kadane's Algo
    int n = v.size();
    int maxSum =0;
    int maxEnding=0;
    for(int i=0;i<n;i++){
        maxEnding = max(maxEnding+v.at(i),v.at(i));
        maxSum = max(maxEnding,maxSum);
    }
    return maxSum;
}

int main(){
    vector<int> v = {2,3,-8,7,-1,2,3};
    cout << "Max contigious subarray sum = " << maxSubarraySum(v) << endl;
    cout << "Max contigious subarray sum = " << maxSubarraySum1(v) << endl;
    return 0;
}