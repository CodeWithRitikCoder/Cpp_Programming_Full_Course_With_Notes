//Write a program to use Single inheritance in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

class Base{
    int data1; // private by default is not inheritable.
    public:
    int data2;
    void setData(void);
    int getData1();
    int getData2();
};

void Base::setData(void){
    data1= 10;
    data2= 20;
}

int Base::getData1(void){
    return (data1);
}

int Base::getData2(void){
    return (data2);
}

class Derived: public Base { //class is being derived publically.
    int data3;
    public:
    void process();
    void display();
};

void Derived::process(){
    data3= data2* getData1();
}

void Derived::display(){
    cout<<"The value of data1 is : "<<getData1()<<endl;
    cout<<"The value of data2 is : "<<data2<<endl;
    cout<<"The value of data3 is : "<<data3<<endl;
}

int main(){
    cout<<"Single inheriacne in C++ programming\n";
    
    Derived der1;
    der1.setData();
    der1.process();
    der1.display();
    
    //getch();
    return(0);
}