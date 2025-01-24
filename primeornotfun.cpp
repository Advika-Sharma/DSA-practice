#include<iostream>
using namespace std;

bool isprime(int n){
    if(n<=1) return false;
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
} 

int main(){
    int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    if(isprime(n)){
        cout<<n <<"is prime"<<endl;
    }
    else{
        cout<<n<<"is not prime"<<endl;
    }
}