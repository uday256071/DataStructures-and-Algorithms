#include <iostream>
#include <vector>

using namespace std;

vector<int> removeDuplicates(vector<int> v){
    int n  = v.size();
    if (n<2){
        return v;
    }

    int res=0;
    for(int i=1 ;i<n;i++){
        if (v.at(i) != v.at(i-1)){
            res=res+1;
            v.at(res)=v.at(i);
        }
    }
    return vector<int>(v.begin(),v.begin()+res+1);
}

int main(){
    vector<int> v = {1,2,2,3,3,3,4,5,6,6,7,8,9,9,9};
    vector<int> newV = removeDuplicates(v);
    for(auto it:newV){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}