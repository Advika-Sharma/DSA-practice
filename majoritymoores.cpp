#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=5,freq=0,ans=0;
    vector<int> nums={1,2,2,1,1};

    for(int i=0; i<n;i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
                freq++;
        }else{
                freq--;
        }
    }
    freq=0;
    for(int i=0;i<n;i++){
        if (nums[i]==ans){
            freq++;
        }
    }
    if(freq>n/2){
        cout<<"Majority Element is "<<ans<<endl;
    }
    return 0;
}

