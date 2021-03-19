#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int tapRainWater(vector<int> v){
    int waterStored =0;
    int n = v.size();
    if (n<3) return 0;
    vector<int> lmax(n); 
    vector<int> rmax(n); 
    lmax.at(0)= v.at(0);
    rmax.at(n-1)= v.at(n-1);

    for(int i=1;i<n;i++){
        lmax.at(i)=max(v.at(i),lmax.at(i-1));
    }
    for(int j=n-2;j>-1;j--){
        rmax.at(j)=max(v.at(j),rmax.at(j+1));
    }

    for(int i=0;i<n;i++){
        waterStored += min(lmax.at(i),rmax.at(i))-v.at(i);
    }

    // for(int i=0;i<n;i++){
    //     cout << lmax.at(i)<< " "<<v.at(i)<< " "<< rmax.at(i) << endl;
    // }

    return waterStored;

}

int main(){
    vector<int> v ={5,0,6,2,3};
    int res = tapRainWater(v);

    cout << "Units of rain water tapped = "<< res<< endl;
}