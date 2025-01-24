#include<iostream>
using namespace std;
int prnthello(){
    cout<<"hello"<<endl;
    return 3;
}
int main(){
    prnthello();
    int val=prnthello();
    cout<<"val ="<<val<<endl;
  return 0;
}