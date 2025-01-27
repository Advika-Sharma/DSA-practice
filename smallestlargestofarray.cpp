#include<iostream>
#include <climits>
using namespace std;
int main(){
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int num[5];
    cout<<"enter the array"<<endl;
    for(int i=0;i<5;i++){
        cin>>num[i];
        if(num[i]<smallest){
            smallest=num[i];
            //smallest = min(num[i]),smallest;
        }
        else{
            if(num[i]>largest){
                largest=num[i];
                //largest = max(num[i]),largest;
            }
        }
    }
    cout<<"smallest no is"<<smallest<<endl;
    cout<<"largest no is"<<largest<<endl;
    return 0;
}