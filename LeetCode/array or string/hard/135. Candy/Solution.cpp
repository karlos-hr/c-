#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {

    }
};

int main() {
    cout<< endl << " ========== SOLUTION ==========" <<endl;
    Solution sol;

    vector<int> nums = {1,2,87,87,87,2,1}; 
    vector<int> nums2 = {1,0,2};
    vector<int> nums3 = {1,2,2};
    vector<int> nums4 = {1,3,4,3,2,1};
    vector<int> nums5 = {1,2,3,4,3,2,1};
    vector<int> nums6 = {1,2,3,2,2,1};

    cout << "Candies: " << sol.candy(nums) << endl;  // 13
    cout << "Candies: " << sol.candy(nums2) << endl; // 5
    cout << "Candies: " << sol.candy(nums3) << endl; // 4
    cout << "Candies: " << sol.candy(nums4) << endl; // 13
    cout << "Candies: " << sol.candy(nums5) << endl; // 16
    cout << "Candies: " << sol.candy(nums6) << endl; // 10
    
    return 0;
}