#include <iostream>
#include <vector>

using namespace std;

int maxConsectiveOne(vector<int> v){
    int maxCount =0;
    int currCount =0;
    for(auto it:v){
        if (it == 1){
            currCount +=1;
            maxCount = max(currCount,maxCount);
        }else{          
            currCount =0;
        }
    }
    return maxCount;
}

int main(){
    vector<int> v ={1,0,1,1,1,0,1,1,0,1,1,1,1,1};
    cout << "max consecutive zeroes = " << maxConsectiveOne(v);
    return 0;
}