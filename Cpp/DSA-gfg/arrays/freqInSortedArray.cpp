#include <iostream>
#include <vector>

using namespace std;

void printFrequency(vector<int> v){
    int num = v.at(0);
    int freq =0;     
    for(int i=0;i<v.size()-1;i++){
        if(num==v.at(i)){
            freq+=1;
        }else{
            cout<< "frequency of '"<<num<< "' is ->" <<freq  <<endl;
            num =v.at(i);
            freq =1;
        }
    }           
}

int main(){
    vector<int> v = {1,2,2,2,2,3,4,4,5,7,7,7,9,9};
    printFrequency(v);
    return 0;
}