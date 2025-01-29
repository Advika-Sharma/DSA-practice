#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n=5;
    int a[]={1,2,3,4,5};

    int maxsum=INT_MIN;

    for(int start=0;start<n;start++){
        int currentsum=0;
        for(int end=start;end<n;end++){
            currentsum+=a[end];
            maxsum=max(currentsum,maxsum);
            if(currentsum<0){
                currentsum=0;
            }
        }
    }
    cout<<"max subarray sum = "<<maxsum<<endl;
    return 0;
}