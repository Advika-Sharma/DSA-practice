#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter a character"<<endl;
    cin>>ch;
if (ch>='a' && ch<='z'){
    cout<<"lowercase"<<endl;
}
else if (ch>='A'&& ch<='Z'){
    cout<<"UPPERCASE"<<endl;
}
else{
    cout<<"not valid"<<endl;
}
}