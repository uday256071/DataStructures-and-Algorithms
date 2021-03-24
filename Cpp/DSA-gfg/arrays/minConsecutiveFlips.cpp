#include <iostream>
#include <vector>

using namespace std;

void minConsecutiveFlips(vector<int> v){
    int n = v.size();
    if (n==0) return;


    for(int i=1;i<n;i++){
        if(v.at(i)!=v.at(i-1)){
            if(v.at(i) != v.at(0)){
                cout << "from "<< i << " to ";
            }else{
                cout << i-1 <<endl;
            }
        }
    }
    if(v.at(0)!=v.at(n-1)){
        cout << n-1 <<endl;
    }
}

int main(){
    // https://ide.geeksforgeeks.org/cPQnrtDbjm
    vector<int> v = {1,1,0,0,1,1,0,1,1,1,0,1};
    minConsecutiveFlips(v);

}