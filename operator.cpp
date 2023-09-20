#include<iostream>
using namespace std;

int main(){
    int a=4,b=5;
    // Arithmatic operators-->
    cout<<"the value of a+b is:"<<a+b<<endl;
    cout<<"the value of a+b is:"<<a-b<<endl;
    cout<<"the value of a*b is:"<<a*b<<endl;
    cout<<"the value of a/b is:"<<a/b<<endl;
    cout<<"the value of a%b is:"<<a%b<<endl;
    cout<<"the value of a++ is:"<<a++<<endl;
    cout<<"the value of b++ is:"<<b++<<endl;
    cout<<"the value of ++b is:"<<++b<<endl;
    cout<<"the value of ++a is:"<<++a<<endl;
  
    cout<<endl;
    // Comparison operators-->
    cout<<"the value of a>b is:"<<(a>b)<<endl;
    cout<<"the value of a<b is:"<<(a<b)<<endl;
    cout<<"the value of a==b is:"<<(a==b)<<endl;
    cout<<"the value of a!=b is:"<<(a!=b)<<endl;
    cout<<"the value of a<=b is:"<<(a<=b)<<endl;
    cout<<"the value of a>=b is:"<<(a>=b)<<endl;
    
    cout<<endl;
    // Logical operators-->
     cout<<"the value of (a>b) && (a==b) is:"<<((a>b) && (a==b))<<endl;
     cout<<"the value of (a<b) && (a==b) is:"<<((a<b) && (a==b))<<endl;
     cout<<"the value of (a<=b) && (a==b) is:"<<((a<=b) && (a==b))<<endl;
     cout<<"the value of (a>=b) && (a==b) is:"<<((a>=b) && (a==b))<<endl;
     cout<<"the value of (a>=b) && (a!=b) is:"<<((a>=b) && (a!=b))<<endl;
     cout<<"the value of (a<=b) && (a!=b) is:"<<((a<=b) && (a!=b))<<endl;

     cout<<endl;

     cout<<"the value of (a>b) || (a==b) is:"<<((a>b) || (a==b))<<endl;
     cout<<"the value of (a<b) || (a==b) is:"<<((a<b) || (a==b))<<endl;
     cout<<"the value of (a<=b) || (a==b) is:"<<((a<=b) || (a==b))<<endl;
     cout<<"the value of (a>=b) || (a==b) is:"<<((a>=b) || (a==b))<<endl;
     cout<<"the value of (a>=b) || (a!=b) is:"<<((a>=b) || (a!=b))<<endl;
     cout<<"the value of (a<=b) || (a!=b) is:"<<((a<=b) || (a!=b))<<endl;

    return 0;
}