#include<iostream>
using namespace std;
int bintodec(int binnum){
    int ans=0; int pow=1;//2^0
    while(binnum>0){
        int rem=binnum%2;
        ans+=(rem*pow);
        binnum=binnum/10;
        pow*=2;
    }
    return ans;
}
int main(){
     cout<<bintodec(1010)<<endl;
}
