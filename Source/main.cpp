#include <iostream>
#include "function.h"
#include "lib_io.h"
using namespace std;
int main(){
 int n=180;
 int r=n,cnt=0;
 while(r>1){
     for(int i=2;i<=r;i++){
         if(r%i == 0){
             ++cnt;r=r/i;
             cout <<'*'<<i;
             break;
         }
     }
}
cout<<endl;


cout<<"f1="<<f1()<<endl;
cout<<"f2="<<f2()<<endl;
cout<<"f3="<<f3()<<endl;
int a[10]={0,1,2,3,4,5,6,7,8,-99};
cout<<a;
return 0;   
}
