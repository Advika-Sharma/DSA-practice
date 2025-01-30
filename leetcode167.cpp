#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0, j = n - 1;
        vector<int> ans; 

        while (i < j) {
            int pairSum = nums[i] + nums[j];

            if (pairSum > target) {
                j--;
            } else if (pairSum < target) {
                i++;
            } else {
                return {i+1,j+1};
            }
        }
        return {};
    }
};
