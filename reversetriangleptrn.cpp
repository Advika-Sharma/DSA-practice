//#include<iostream>
//using namespace std;
//int main(){
//    int i,j,n=4;
//for(i=1;i<=n;i++){
//    for(j=i;j>0;j--){
//        cout<<j;
//        }
//    cout<<endl;
//    } 
//}

//#include<iostream>
//using namespace std;
//int main(){
//    int i,j,k,n=4;
//for(i=0;i<=n;i++){
//    for(j=0;j<=i;j++){
//        cout<<" ";
//    }
//    for(k=0;k<=n-i;k++){
//            cout<<(i+1);
//        }
//            cout<<endl;
//    }
//} 


//#include<iostream>
//using namespace std;
//int main(){
//    int i,j,k,n=4;
//    int num=1;
//for(i=0;i<=n;i++){
//    for(j=0;j<=i;j++){
//        cout<<" ";
//    }
//    for(k=0;k<=n-i;k++){
//            cout<<(i+1)<<" ";
//        }
//            cout<<endl;
//    }
//} 


#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=4;
    char ch='A';
for(i=0;i<=n;i++){
    for(j=0;j<=i;j++){
        cout<<" ";
    }
    for(k=0;k<=n-i;k++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
} 