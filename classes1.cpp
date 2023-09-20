#include<iostream>
using namespace std;
class binary{
    int i;
    string s;

public:
    void read(void);
    void chek_bi(void);
    void ones_comp(void);
    void display(void);
};

void binary :: read(void){
    cout<<"enter the binary number ";
    cin>>s;
    cout<<endl;
}

void binary :: chek_bi(void){
    for (int i = 0; i < s.length(); i++)         //s.at is the predefined funtion with string
    {
        if(s.at(i)!='0' && s.at(i)!='1'){         
            cout<<"incorrect format "<<endl;
            exit(0);
        }
    }
   cout<<endl; 
}

void binary :: ones_comp(void){
     for (int i = 0; i < s.length(); i++){        //s.length is also a predefined function with stirng
        if(s.at(i)=='1'){
            s.at(i)='0';
        }
        else{
            s.at(i)='1';
        }
        cout<<endl;
     }
} 

void binary :: display(void){
    cout<<"displaying your binary number"<<endl;
     for (int i = 0; i < s.length(); i++){
        cout<<s.at(i);
     }
    
}

int main(){
    binary b;
    b.read();
    b.chek_bi();
    b.display();
    b.ones_comp();
    b.display();
    return 0;
}