#include<iostream>
#include<vector>
using namespace std;
//address
//int main(){
//int a=10;
//cout<<&a<<endl;
//return 0;
//}
//pointer
int main(){
    int a=10;
    int* p=&a;;
    int** ptptr=&p;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<ptptr<<endl;

    //defrence 
    cout<<*(&a)<<endl;


    //null pointer (cnt be defrenced)
    int** ptr = NULL;
    cout<<ptr<<endl;
    return 0;
}