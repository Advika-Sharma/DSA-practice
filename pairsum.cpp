#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> nums, int target){
    vector<int> ans;
    int n=nums.size();
    int i=0,j=n-1;

    while(i<j){
        int pairsum=nums[i]+nums[j];
        if(pairsum>target){
            j--;
    }else if(pairsum<target){
        i++;
    } else {
        ans.push_back(i);
        ans.push_back(j);
        return ans;
        }
    }
}

int main(){
    vector<int> nums={2,7,11,15};
    int target=13;
    vector<int> ans=pairsum(nums,target);
    cout<<ans[0]<<" ,"<<ans[1]<<endl;

    return 0;
}



//int main(){
//    vector<int> nums={2,7,11,15} , ans;
//    int target=9;
//    int ps=0;
//    int n=nums.size();
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//            if(nums[i]+nums[j]==target){
//                ans.push_back(i);
//                ans.push_back(j);
//                break;
//            }
//        }
//    }
//    for (int index : ans) {
//        cout << index << " ";
//    }
//    cout << endl;
//}