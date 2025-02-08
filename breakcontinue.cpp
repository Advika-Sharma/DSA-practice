#include<iostream>
using namespace std;
int main(){
    int pktmoney=3000;
    for(int date=1;date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(pktmoney==0){
            break;
        }
        cout<<"go out today!"<<endl;
        pktmoney=pktmoney-300;
    }
    return 0;
}