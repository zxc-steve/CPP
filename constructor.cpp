#include <iostream>
#include "constructor.h"
using namespace std;
ostream& operator<<(ostream& os,  const int* p){
    os.operator<<(p)<<':';
    for(int i=0;i<10;i++) os<<p[i]<<' ';
    os<<endl;
    return os;
}
class B{
public:
    int d=1;
    B(){cout<<'B'<<endl;}
    B(int d):d(d){cout<<"Bd="<<d<<endl;};
    virtual ~B(){cout<<"B~"<<endl;};
};
class D:public B{
public:
    int x=2;
    D(){cout<<'D'<<endl;}
    D(int d):B(d+10),x(d){cout<<"Dx="<<x<<endl;
    B& br=*this; br=B(900);
    };
    virtual ~D(){cout<<"D~"<<endl;};
};
void f(){
   // B b;
    D d(3);
    cout<<"d.d="<<d.d<<endl;
}
int main() {
    int a[]={1,2,3,4,5,6,7,8,9,0};
    f();
    cout<<a<<endl;
    return 0;
}