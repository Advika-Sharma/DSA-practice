//#include <iostream>
//using namespace std;
//
//int main(){
//    char ch;
//    cout<<"enter a character"<<endl;
//    cin>>ch;
//if (ch>='a' && ch<='z'){
//    cout<<"lowercase"<<endl;
//}
//else if (ch>='A'&& ch<='Z'){
//    cout<<"UPPERCASE"<<endl;
//}
//else{
//    cout<<"not valid"<<endl;
//}
//}

#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter a character"<<endl;
    cin>>ch;
if (ch>=97 && ch<=122){
    cout<<"lowercase"<<endl;
}
else if (ch>=65 && ch<= 90){
    cout<<"UPPERCASE"<<endl;
}
else{
    cout<<"not valid"<<endl;
}
}