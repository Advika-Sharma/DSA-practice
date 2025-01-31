#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n[]={1,2,3,4};
    int size = sizeof(n) / sizeof(n[0]); 
    vector<int> ans(size, 1);
    for(int i=0;i<size;i++){
        int product=1;
        for(int j=0;j<size;j++){
            if(i!=j){
                product*=n[j];
            }
        }
        ans[i]=product;
    }
    for(int val:ans){
        cout<<val<<" ";
    }
    return 0;
}