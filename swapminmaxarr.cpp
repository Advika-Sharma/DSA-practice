#include<iostream>
#include<climits>
using namespace std;
//swap min and max no from an array 
void swapping(int a[], int size){
    int min=0 , max=0;

for(int i=0;i<size;i++){
        if(a[i]<a[min]) min=i;
        if(a[i]>a[max]) max=i;
    }
    swap(a[min],a[max]);
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
    }
}
int main()
{   int size=5;
    int a[size];
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"array after swapping"<<endl;
    swapping(a,size);
}