#include<iostream>
using namespace std;
int sum1toN(int n){
    int sum=0;
    int i=1;
while(i<=n){
    sum=sum+i;
    i++;
    }
    return sum;
}
int main(){
    cout<<sum1toN(3);
}