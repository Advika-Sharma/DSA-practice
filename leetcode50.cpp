#include <vector>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        long bf=n;
        if(n<0){
            x=1/x;
            bf=-bf;
        }
        double ans=1;
        while(bf>0){
            if(bf%2==1){
                ans*=x;
            }
            x*=x;
            bf/=2;
        }
        return ans;
    }
};