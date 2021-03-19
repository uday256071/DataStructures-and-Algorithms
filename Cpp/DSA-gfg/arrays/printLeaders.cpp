#include <iostream>
#include <vector>
#include <limits>

using namespace std;

void printLeaders(vector<int> v){
    int currLeader=numeric_limits<int>::min();
    for(auto i=v.end()-1;i!=v.begin();i--){
        if (*i >currLeader){
            cout << *i << " ";
            currLeader= *i;
        }
    }
    cout << endl;
}

int main(){
    //If all numbers on right of a number is smaller than it, then the number is called leader. Even equal is not allowed
    vector<int> v = {1,5,9,8,2,6,8,9,1,5,2};
    printLeaders(v);
    return 0;
}