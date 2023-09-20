#include<iostream>
using namespace std;
void swap(int*x,int*y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int b,c;
    int* a=&b;
    int* d=&c;
    b=3;
    c=4;
    cout<<a<<endl;
    cout<<*a<<endl;
    cout<<d<<endl;
    cout<<*d<<endl;
    cout<<a+b<<endl;
    cout<<(*a)+(*d)<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    swap(&b,&c);
    cout<<b<<endl;
    cout<<c<<endl;

    return 0;
}
