#include<iostream>
using namespace std;

int main(){
long long n,fact=1,mul=1;
cout<<"enter the value of n"<<endl;
cin>>n;
while(mul<=n){
    fact=fact*mul;
    mul++;
}
cout<<fact<<endl;
return 0;
}