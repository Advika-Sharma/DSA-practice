#include<iostream>
using namespace std;

int dosum(int a[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += a[i];
    }
    return sum;
}

int doproduct(int a[],int size){
    int product = 1;
    for(int i=0;i<size;i++){
        product *= a[i];
        }
        return product;
}

int main(){
    int size=5;
    int a[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"sum of all no in array"<<endl;
    cout<<dosum(a,size)<<endl;
    cout<<"product of all no in array"<<endl;
    cout<<doproduct(a,size);
}