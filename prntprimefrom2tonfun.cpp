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
    cout<<"enter value of n"<<endl;
    cin>>n;
    cout<<"all prime no fro  2 to"<<n<<endl;
    for(int i=2;i<=n;i++){
        if(isprime(i)) cout<<i<<" ";
    }
}