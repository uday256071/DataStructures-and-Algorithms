#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> moveZeroesToEnd(vector<int> v){
    int nonZeroCount=0;

    for(int i=0;i<v.size();i++){
        if(v.at(i)){
            swap(v[nonZeroCount],v[i]);
            nonZeroCount+=1;
        }
    }
    return v;
}

int main(){
    vector<int> v = {1,0,5,6,0 ,0,6,9,0};
    vector<int> newV= moveZeroesToEnd(v);
    for(auto it:newV){
        cout << it <<" ";
    }
    cout << endl;
    return 0;
}