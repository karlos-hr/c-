
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
    }

    static void print(vector<int>& nums1){
        std::cout << "[";
        for (auto it = nums1.begin(); it != nums1.end(); ++it) {
            std::cout << *it;
            if (it != nums1.end() - 1) {
                std::cout << ", " ;
            }
        }
        std::cout << "]";
    }
};



int main() {
    std::cout << std::endl << "=========SOLUTION=========" << std::endl;
    Solution sol;

    vector<int>nums1 = {1,2,3,0,0,0};
    vector<int>nums2 = {2,5,6};

    sol.merge(nums1,3,nums2,3);
    Solution::print(nums1);

    return 0;
}