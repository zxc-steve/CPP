#include <iostream>
#include "constructor.h"
using namespace std;
ostream& operator<<(ostream& os,  const int* p){
    os.operator<<(p)<<':';
    for(int i=0;i<10;i++) os<<p[i]<<' ';
    os<<endl;
    return os;
}
