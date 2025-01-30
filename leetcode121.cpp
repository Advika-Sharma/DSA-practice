#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0,bestbuy=prices[0];

        for(int i=1;i<prices.size();i++){
            if(prices[i]>bestbuy){
                mp=max(mp,prices[i]-bestbuy);
            }
            bestbuy=min(bestbuy,prices[i]);
        }
        return mp;
    }
};