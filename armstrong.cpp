#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int sum=0;
    int orifinal=n;
    while(n>0){
        int lastdigit= n%10;
        sum+=(pow(lastdigit,3));
        n/=10;
    }
    if(sum==orifinal){
        cout<<"armstrong no"<<endl;
    }else{
        cout<<"not armstrong"<<endl;
    }
}