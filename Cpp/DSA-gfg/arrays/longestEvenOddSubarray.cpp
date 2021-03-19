#include <iostream>
#include <vector>

using namespace std;

int longestEvenOddSubarray(vector<int> v){
    int n = v.size();
    if (n<1) return 0;
    int maxLength=1;
    int currLength =1;

    for(int i =1;i<n;i++){
        if(v.at(i-1)%2 == v.at(i)%2){
            currLength++;
            maxLength=max(maxLength,currLength);
        }else{
            currLength=1;
        }
    }
    return maxLength;
}

int main(){
    vector<int> v ={10,12,14,7,8};
    cout << "Max Even odd subarray length = "<< longestEvenOddSubarray(v);

    return 0;
}