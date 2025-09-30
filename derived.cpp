#include <iostream>
using namespace std;
class B{
  public:
  int x=0;
  int getx(){return this->x;}
};
class D:public B{
  public:
  int x=11;
  //int getx(){return x;}
};
int main(){
  B b;
  D d;
  cout<<b.getx()<<endl;
  cout<<d.getx()<<endl;
}
