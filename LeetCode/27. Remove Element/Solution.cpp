

#include <iostream>
#include <vector>

using namespace  std;


class Solution {
public:


    int remove(vector<int>& nums, int val, vector<int>::iterator it){
        if( it == nums.end()) return nums.size();
        it = (*it != val) ? ++it : nums.erase(it);
        return remove(nums,val,it);
    }

    int removeElement(vector<int>& nums, int val) {
        return remove(nums,val,nums.begin());
    }


    static void print(vector<int> nums){
        for(auto it : nums){
            cout << it << endl;
        }
    }
};


int main() {
    cout<< endl << " ========== SOLUTION ==========" <<endl;
    Solution sol;

    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;


    cout << "Size: " << sol.removeElement(nums,val) << endl; 
    Solution::print(nums);
    return 0;
}