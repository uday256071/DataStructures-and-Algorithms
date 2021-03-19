// stlGod.cpp : defines the entry point for the console application.

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

bool f(int x, int y){
    return x>y;
}
void vectorDemo(){
     vector<int> A ={11,2,3,14};

    cout << A[1] <<endl;

    sort(A.begin(),A.end());  // O(NlogN)

    // 2, 3, 11, 14
    bool present = binary_search(A.begin(),A.end(),3);  //true
    cout << "binary search for 3 : " << present <<endl;
    present = binary_search(A.begin(),A.end(),4);    //false
    cout << "binary search for 4 : " << present <<endl;

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);

    // vector<int>:: iterator it = lower_bound(A.begin(),A.end(),100);    // >=     //O(logN)
    // vector<int>:: iterator it2 = upper_bound(A.begin(),A.end(),100);   // >
    // cout << *it << " " << *it2 << endl;
    // cout << it2 - it << endl;   //5

    auto it = lower_bound(A.begin(),A.end(),100);
    auto it2 = upper_bound(A.begin(),A.end(),100);
    cout << *it << " " << *it2 << endl;
    cout << it2 - it << endl; 

    // reverse sort  -- compartor function f
    sort(A.begin(),A.end(),f);

    vector<int>::iterator it3;

    // for(it3 = A.begin();it3 != A.end();it3++){
    //     cout << *it3 << " ";
    // }
    for(int x :A){
        cout << x << " ";
    }
    cout << endl;

    for(int &x :A){
        x++;
        cout << x << " ";
    }
    cout << endl;
}

void setDemo(){
    set<int> s;
    s.insert(1);    // O(logN)
    s.insert(2);
    s.insert(-1);
    s.insert(-10);

    for(int x: s){
        cout<< x << " ";
    }
    cout << endl;

    auto it = s.find(-1);  // if not found returns s.end()
    if(it==s.end()){
        cout << "not present";
    }else{
        cout << "present ";
        cout << *it << endl;
    }

    auto it2 = s.lower_bound(-1);
    auto it3 = s.upper_bound(-1);  // if no upper_bound found returns s.end()
    cout << *it2<< " "<< *it3 << " "<< endl;

    s.erase(-1);
    for(int x:s){
        cout << x << " ";
    }
    cout<< endl;
}

void mapDemo(){
    map<int, int> A;
    A[1]=100;   //O(logN)   -- where N is present size of map
    A[2]=15;
    A[3]=256;
    A[102354]=268; 

    A.find(2);
    A.erase(2);

    map<char, int> cnt;
    string x= "rachit jain";
    for(char c:x){
        cnt[c]++;
    }
    cout<< cnt['a']<< " "<< cnt['z']<<endl;

    cout << INT64_MAX << " "<< INT64_MIN << endl;

}

void powerOfStl(){
    //[x,y]
    /*  add[2,3]
        add[10,20]
        add[30,400]
        add[401,450]
        give me the interval of 405
    */
   set <pair<int,int>> s; 
   s.insert({2,3});
   s.insert({10,20});
   s.insert({30,400});
   s.insert({401,450});
 

   int point =401;
   auto it = s.upper_bound({point,INT32_MAX});
   if(it ==s.begin()){
       cout << "point absent"<< endl;
       return;
   }
   it--;
   pair<int, int> current = *it;

   if (current.first<=point && point <= current.second){
       cout << "point present in pair :{"<< current.first<<", "<<current.second<<" }"<< endl;
   }else{
       cout <<  "point not found--"<<endl;
   }
}

int main(){
    // vectorDemo();
    // setDemo();
    // mapDemo();
    powerOfStl();
}
