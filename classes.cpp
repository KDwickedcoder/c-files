#include<iostream>
using namespace std;
class employee
{
private:
  int a,b,c;
public:
  int d,e;
  void setdata(int a1,int b1,int c1);
  void getdata(){

    cout<<"enter the value of a: "<<a<<endl;
    cout<<"enter the value of b: "<<b<<endl;
    cout<<"enter the value of c: "<<c<<endl;
    cout<<"enter the value of d: "<<d<<endl;
    cout<<"enter the value of e: "<<e<<endl;
  }
};

  void employee :: setdata(int a1,int b1, int c1){

    a=a1;
    b=b1;
    c=c1;
  }
int main(){
    employee Karan;
    Karan.setdata(13,43,234);
    Karan.d=89;
    Karan.e=45;
    Karan.getdata();
    return 0;
}