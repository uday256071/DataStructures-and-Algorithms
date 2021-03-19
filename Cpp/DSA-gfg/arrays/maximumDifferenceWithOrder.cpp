#include <iostream>
#include <vector>

using namespace std;

int getMaxDiffWithOrder(vector<int> v){ 
    int n = v.size();
    if (n<2) return 0;

    int diff =0;
    int MinTillNow =v.at(0);
    int temp =0;

    for(int i=1;i<n;i++){

        temp = v.at(i)-MinTillNow;

        if(temp>diff){
            diff = temp;
        }
        if(v.at(i)<MinTillNow){
            MinTillNow=v.at(i);
        }
    }

    return diff;
}

int main(){
    //   https://ide.geeksforgeeks.org/eKkmrh9wSh
    vector<int> v ={3,5,2,6,8,3,6,7,1};
    cout<<"Max difference with oder is : "<< getMaxDiffWithOrder(v);

    return 0;
}