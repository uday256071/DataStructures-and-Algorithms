#include <iostream>
#include <vector>

using namespace std;

int buySellStocks(vector<int> v){
    int i = 0;
    int n = v.size();
    int profit =0;
    while(i<n-1){
        int p1 = v.at(i);
        int j = i+1;
        while(j<n && i<n){
            if (v.at(j)>v.at(i)){
                if(j+1 <n && v.at(j+1)>=v.at(j)){
                    j++;
                }else{
                    profit += v.at(j)-v.at(i);
                    i=j;
                    break;
                }
            }else{
                i=i+1;
                break;
            }
        }
    }
    return profit;
}

int buySellStocks_best(vector<int> v){

    /* uses local maxima and local minima. 
    basically on each up we add profit (consider bought and sold each step)
    on each down we do nothing, we dont buy.*/
    int n= v.size();
    int profit =0;
    for(int i=1;i<n;i++){
        int p1 = v.at(i-1);
        int p2 = v.at(i);      
        if(p1<p2){
            profit += p2-p1;
        }
    }
    return profit;
}
int main(){
    vector<int> v ={2,1,3,5,2,8,9,10};

    // int profit = buySellStocks(v);

    int profit = buySellStocks_best(v);  

    cout << "Profits - "<<profit<<endl;

    return 0;

}