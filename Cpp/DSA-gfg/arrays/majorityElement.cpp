#include <iostream>
#include <vector>

using namespace std;

int getMajorityEle(vector<int> v){
    int n =v.size();
    if (n==0) return -1;
    int res = v.at(0);
    int count =1;

    for(int i=1;i<n;i++){
        if(v.at(i)==res){
            count++;
        }else{
            if(count>0){
                count--;
            }else{
                count=1;
                res = v.at(i);
            }
        }
    }
    count =0;
    for(int i=0;i<n;i++){
        if(v.at(i)==res) count++;       
    }
    // cout << n/2 << endl;
    if(count>n/2){
        return res;
    }else{
        return -1;
    }

    return res;
}

int main(){
    // Boyer Moore's voting algorithm
    // https://ide.geeksforgeeks.org/AAU0PbQvy4
    vector<int> v = {2,2,1,5,2,5};
    int majority = getMajorityEle(v);
    if(majority>0){
        cout<< "majority element is :"<<majority;
    }else{
        cout<< "No majority element found";
    }
}