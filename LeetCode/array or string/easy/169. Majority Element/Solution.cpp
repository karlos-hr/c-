
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    
    // Algorithm : Booyer - Moore
    int majorityElement(vector<int>& nums) {
        
        int result = 0, major = 0;

        for(auto num : nums){
            //If 'major' == 0, it means there might be a number that could possibly be greater than the previous one."
            if(major == 0) result = num;
            /*
            If the result is equal to the number, then we keep adding the 'major'; 
            if it's not the same number, then we subtract, so if there are 2 twos and 3 ones, then (2 - 3) means there are more 1s.
            */
            result == num ? ++major : --major;
        }

        return result;
    }
};



int main() {
    std::cout << std::endl << "=========SOLUTION=========" << std::endl;
    Solution sol;

    vector<int>nums1 = {1,2,3,0,0,0};

    cout << sol.majorityElement(nums1) << endl;
    

    return 0;
}