#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:

    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k %= size; // 3
        reverse(nums,0, size - 1); // 7, 6, 5, 4, 3, 2, 1
        reverse(nums,0, k - 1); // 5, 6, 7, 4, 3, 2, 1
        reverse(nums,k, size - 1); // 5, 6, 7, 1, 2, 3, 4
    }

    void reverse (vector<int>& nums, int left, int right ) { 
        while(left < right) {
            int aux = nums[left];
            nums[left] = nums[right];
            nums[right] = aux;
            ++left;
            --right;
        }
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
    int k = 2;
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