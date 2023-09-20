#include<iostream>
using namespace std;

int main(){
    int marks[]={1,23,43,54};
    int phymarks[4];
    phymarks[0]=46;
    phymarks[1]=78;
    phymarks[2]=69;
    phymarks[3]=98;

    marks[2]=467;

    cout<<"these are the marks:\n";
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    cout<<"these are phymarks:"<<endl;
    cout<<phymarks[0]<<endl;
    cout<<phymarks[1]<<endl;
    cout<<phymarks[2]<<endl;
    cout<<phymarks[3]<<endl;

    for(int i=0;i<4;i++){

        cout<<"the value of marks "<<i<<" is "<< marks[i]<<endl;
    }
    int a=0;

    cout<<endl;
    while(a<4){

         cout<<"the value of marks "<<a<<" is "<< marks[a]<<endl;
         a++;
    }
     cout<<endl;
     int b=0;
    do{
        cout<<"the value of marks "<<b<<" is "<< marks[b]<<endl;
         b++; 
    }while(b<4);
    // Pointers and array
    cout<<endl;

    int* p=marks;

    cout<<"the value of marks[0] is: "<<*p<<endl;
    cout<<"the value of marks[1] is: "<<*(p+1)<<endl;
    cout<<"the value of marks[2] is: "<<*(p+2)<<endl;
    cout<<"the value of marks[3] is: "<<*(p+3)<<endl;
    cout<<"the value of marks[0] is: "<<*p++<<endl;
    cout<<"the value of marks[1] is: "<<*p<<endl;
    cout<<"the value of marks[2] is: "<<*++p<<endl;
    cout<<"the value of marks[2] is: "<<*p--<<endl;
    cout<<"the value of marks[1] is: "<<*p<<endl;
    return 0;
}