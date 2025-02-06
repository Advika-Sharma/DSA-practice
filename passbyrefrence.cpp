#include<iostream>
#include<vector>
using namespace std;

//void changea(int* ptr){//pass by refrence using pointers 
//    *ptr=20;
// } 
// int main(){
//     int a=10;
//     changea(&a);
//     cout<<"inside main fun "<<a<<endl;
//     return 0;
// }
 
void changea(int &b){//pass by refrence using alias
    b=20;
} 
int main(){
    int a=10;
    changea(a);
    cout<<"inside main fun "<<a<<endl;
    return 0; 

    //constant ptr array ptr
    //int arr[]={1,2,3,4,5}
    //int a=5;
    //arr=&a; //constant
}
 