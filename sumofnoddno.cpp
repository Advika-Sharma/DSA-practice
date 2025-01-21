#include<iostream>
using namespace std;
int main(){
    int n=3,sum=0,count=1;
if(n%2 != 0){
while(count<=n){
    sum=sum+count;
    count++;
    }
}
cout<<sum<<endl;
return 0;
}