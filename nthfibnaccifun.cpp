#include<iostream>
using namespace std;

int fibonacci(int n){
    if (n<=1) return n; ///base case 
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n=4;
    for(int i=0 ; i<=n;i++){
        cout<<fibonacci(i);
    }
}