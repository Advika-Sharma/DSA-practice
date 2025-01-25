#include<iostream>
using namespace std;

int integer(int n)
{   int pow=1;
    int ans=0;
while(n>0){
    int rem=n%10;
    ans=ans*10+rem;
    n=n/10;
    }
    return ans;
}
int main(){
 cout<<integer(125);
}