#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwt=0;
        int lp=0,rp=height.size()-1;

        while(lp<rp){
            int w=rp-lp;
            int ht=min(height[lp],height[rp]);
            int currentwt=w*ht;
            maxwt=max(maxwt,currentwt);

            height[lp]<height[rp] ? lp++ : rp--;

        }
        
            return maxwt;
    }
};








class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
                    int w=j-i;
                    int ht=min(height[i],height[j]);
                    int currentwt=w*ht;

                    maxwater=max(maxwater,currentwt);
            }
        }
        return maxwater;
    }
};