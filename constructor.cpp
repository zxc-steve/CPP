#include <iostream>
using namespace std;
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
    int a=0;
    f();
    return 0;
}