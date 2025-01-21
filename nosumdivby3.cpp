#include<iostream>
using namespace std;

int main(){
int count=1,sum=0,n;
cout<<"enter the value of n"<<endl;
cin>>n;

    while(count<=n){
        if(count %3==0){
        sum=sum+count;
        }
        count++;
    }
cout<<sum<<endl;
}