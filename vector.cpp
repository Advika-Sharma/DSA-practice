#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> vec={1,2,3};
    vector<char> vect={'a','b','c'};
    cout<<vect[0]<<endl;
    //vector<int>vec(3,0) (size,value)
    for(int i : vec){
        cout<<i<<endl;
    }
    for(char val : vect){
        cout<<val<<endl;
    }
    //size fun
    cout<<"size ="<<vec.size()<<endl;

    //pushback fun 
    vector<int> empt;
    cout<<"size ="<<empt.size()<<endl;
    empt.push_back(25);
    empt.push_back(35);
    empt.push_back(45);
    //popback fun
    empt.pop_back();
    cout<<"after push back size ="<<empt.size()<<endl;
    cout<<"capacity = "<<empt.capacity()<<endl;
    for(int val:empt){
        cout<<val<<endl;
        //front and back fun
    cout<<"front"<<empt.front()<<endl;
    cout<<"back"<<empt.back()<<endl;
    cout<<"at"<<empt.at(1)<<endl;
    }
    return 0; 
}