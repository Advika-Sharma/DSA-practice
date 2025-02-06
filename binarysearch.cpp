#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int> arr,int tar){
    int st=0, end=arr.size()-1;
    while(st<=end){
        int mid=st+ (end-st)/2;

        if(tar>arr[mid]){
            st=mid+1;
        }else if(tar<arr[mid]){
            end=mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}

int recbinarysc(vector<int> arr,int tar,int st,int end){
    if(st<=end){
        int mid=st+ (end-st)/2;

        if(tar>arr[mid]){
            return recbinarysc(arr,tar,mid+1,end);  
        } else if(tar<arr[mid]){
            return recbinarysc(arr,tar,st,mid-1);
        }else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    int tar=5;
    cout<<binarysearch(arr,tar)<<endl;
    vector<int> arr1={1,2,3,4,5,6,7};
    int tar1=5;
    cout<<recbinarysc(arr1,tar1,0,8)<<endl;
    return 0;
}