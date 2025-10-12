#include <iostream>
using namespace std;

void f(int a,int b,int arr1[],int arr2[],int size1,int size2){
    cout<<"a="<<a<<"\t"<<"b="<<b<<"\t";
    cout<<"x=";
    for(int i=0;i<size1;i++)    cout<<arr1[i]<<',';
    cout<<"\ty=";
    for(int i=0;i<size2;i++)    cout<<arr2[i]<<',';
    cout<<endl;
    
}

void m(int &a,int &b,int arr1[],int arr2[],int size1,int size2){
    a++;b++;
    for(int i=0;i<size1;i++)    arr1[i]++;
    for(int i=0;i<size1;i++)    arr2[i]++;
}
void m1(int *a,int *b,int arr1[],int arr2[],int size1,int size2){
    (*a)++;(*b)++;
    for(int i=0;i<size1;i++)    arr1[i]++;
    for(int i=0;i<size1;i++)    arr2[i]++;
}

int main(){
int a=1,b=0,x[3]={1,2,3},y[3]={7,8,9};

cout<<"input 2-2 int\n";
cin>>a>>b;

int *p1=&a,*p2=&b;
cout<<p1<<","<<p2<<':'<<*p1+*p2<<endl;
p1=x;p2=y;
    
for(int i=0;i<3;i++){
    cout<<p1<<","<<p2<<':'<<*p1+*p2<<endl;
    p1++;p2++;
}
f(a,b,x,y,3,3);
m(a,b,x,y,3,3);
f(a,b,x,y,3,3);
return 0;
}

