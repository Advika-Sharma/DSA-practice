#include<iostream>
using namespace std;
int dectobin(int decnum){
    int ans=0; int pow=1;//10^0
    while(decnum>0){
        int rem=decnum%2;
        decnum=decnum/2;
        ans+=(rem*pow);
        pow=pow*10;
    }
    return ans;
}
int main(){
    for(int i=1;i<=10;i++){
     cout<<dectobin(i)<<endl;
    }
}