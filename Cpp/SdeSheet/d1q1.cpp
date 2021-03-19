/*  https://leetcode.com/problems/find-the-duplicate-number/    
https://www.youtube.com/watch?v=32Ll35mhWg0&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2&index=1
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int slow=nums[0];
        int fast=nums[0];
        
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        } while(slow!=fast);
        
        fast= nums[0];
        
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};

int main(){
    Solution sol;
    vector <int> A = {1,3,4,2,2};
    cout << "The duplicate number is : "<< sol.findDuplicate(A) << endl;
}