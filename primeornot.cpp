#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter a no"<<endl;
    cin>>n;

bool isprime=true;
for(i=2;i<=n-1;i++){
    if(n%i==0){
        isprime=false;
    }
}
if(isprime==true){
    cout<<"no is prime"<<endl;
}
else{
    cout<<"no is not prime"<<endl;
}
return 0;
}