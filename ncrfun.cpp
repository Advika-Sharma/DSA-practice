#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n ; i++){
        fact*=i;
    }
    return fact;
}

int ncr(int n,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    cout<<ncr(8,2);
}