#include<iostream>
#include<vector>
#include<climits>
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int cp=1, mp=INT_MIN, minp=1;
        for (int val:nums){
            if(val<0) swap(cp,minp);
             cp = max(val, cp * val);
            minp = min(val, minp * val);
            
            mp = max(mp, cp);
        }
        return mp;
    }
};