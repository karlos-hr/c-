#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int sol = 0;
        int aux = prices[0];
        for(int i = 0 ; i < prices.size() ; ++i){
            int it = prices[i];
            int price = aux - it ;
            
            if(price >= 0){
                aux = it; continue;
            }
            if(sol > price){
                sol = price;
            }
        
            
        }

        return sol < 0 ? -1 * sol : 0;
    }
};



int main() {

    Solution sol;
    vector<int> nums = {7,1,5,3,6,4};

    cout << endl << "SOLUTION" << endl;
    cout << sol.maxProfit(nums) << endl;

}