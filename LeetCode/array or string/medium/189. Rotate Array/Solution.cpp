#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
    }

    static void print(vector<int> nums){
        cout << endl;
        for(auto it : nums){
            cout << it << endl;
        }
    }

};


int main() {
    cout<< endl << " ========== SOLUTION ==========" <<endl;
    Solution sol;

    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    sol.rotate(nums,k);
    Solution::print(nums);
    
    nums = {-1,-100,3,99};
    k = 2;
    sol.rotate(nums,k);
    Solution::print(nums);

    nums = {1,2};
    k = 3;
    sol.rotate(nums,k);
    Solution::print(nums);

    nums = {1,2,3};
    k = 2;
    sol.rotate(nums,k);
    Solution::print(nums);

    nums = {1,2};
    k = 1;
    sol.rotate(nums,k);
    Solution::print(nums);
    return 0;
}