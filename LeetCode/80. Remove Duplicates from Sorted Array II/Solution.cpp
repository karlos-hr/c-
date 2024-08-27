#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto it = nums.begin();
        auto itNext = nums.begin() + 1;
        int numOfTry = 0;
        bool equals = false;
        while(itNext != nums.end()){
            equals = *it == *itNext; 
            if(numOfTry > 1 && !equals){
                it = nums.erase(it,itNext - 2) + 1 ;
                itNext = it;
                numOfTry = 0;
            }else{
                if(equals) ++numOfTry;
                else {
                    numOfTry = 0;
                    it = itNext;
                }
            }
            ++itNext;
        }
        if(equals) nums.erase(it,itNext - 2);
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

    vector<int> nums = {0,0,1,1,1,2,2,2,3,3,4};

    cout << "Duplicates: " << sol.removeDuplicates(nums) << endl; 
    Solution::print(nums);
    return 0;
}