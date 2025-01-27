#include<iostream>
using namespace std;
int main(){
    //int marks[5]={2,3,4,5,6};
    //int price[]={2,3,4};
    int size=5;
    int marks[5];
    for(int i=0;i<size;i++){
        cout<<"enter the array"<<endl;
        cin>>marks[i];
    }
    //0 to (n-1)
    cout<<marks[3]<<endl;
    //size of array 
    cout<<sizeof(marks)/sizeof(int)<<endl;
    //loop
    for(int i=0;i<size;i++){
        cout<<marks[i]<<endl;
    }
}