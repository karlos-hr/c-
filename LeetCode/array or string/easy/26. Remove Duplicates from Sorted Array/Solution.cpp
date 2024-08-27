#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto it = nums.begin();
        auto itNext = nums.begin() + 1;
        bool equals = false;
        while(itNext != nums.end()){
            equals = *it == *itNext; 
            if(!equals){
                it = nums.erase(it,itNext - 1) + 1 ;
                itNext = it;
            }
            ++itNext;
        }
        if(equals) nums.erase(it,itNext - 1);
        return nums.size();
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

    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    cout << "Duplicates: " << sol.removeDuplicates(nums) << endl; 
    Solution::print(nums);
    return 0;
}