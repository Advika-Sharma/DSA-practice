//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    cout<<"enter a number"<<endl;
//    cin>>n;
//if (n>=0){
//    cout<<"Positive"<<endl;
//}
//else {
//    cout<<"Negative"<<endl;
//}
//}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    cout<<(n>=0 ? "positive":"negative")<<endl;
    return 0;
}