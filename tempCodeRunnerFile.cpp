#include<iostream>
using namespace std;

int check(int n){
    for(int i=1;i<=n;i++){
        if(n%2==0){
            return n;
        }
        else {
            return 0;
        }
    }
    return n;
} 

int main(){
    cout<<check(2);
}