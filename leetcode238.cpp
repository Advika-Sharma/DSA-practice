#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);

        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
        }

        int sufix=1;
        for(int i=n-1 ;i>=0; i--){
            ans[i] *= sufix;
            sufix *= nums[i];
        }

        return ans;
     }
};



class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(nums.size(),1);

        for(int i=0;i<n;i++){
            int product=1;
            for(int j=0;j<n;j++){
                if(i!=j){
                    ans[i]*=nums[j];
                }
            }
        }
        return ans;
    }
};