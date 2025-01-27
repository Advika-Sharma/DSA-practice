#include<iostream>
using namespace std;
int search(int n){
cout<<"enter the values of array"<<endl;
    int arr[n];
    int target=8;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    cout<<"array found at index "<<search(8)<<endl;
    return 0;
}