#include<iostream>
using namespace std;
double minof2(double a, double b){
if (a<b){
    return a;
}
else {
    return b;
}
}
int main(){
    cout<<"min is = "<<minof2(3,2);
}