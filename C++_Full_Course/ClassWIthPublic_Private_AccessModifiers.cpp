//Write a program to Create a Class with Public and Private member in the class in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Creation of Employee class.
class Employee{

    //bydefault access modifier is private in C++ programming. if you didn't write here any access modifier it will take 
    //bydefault private access modifier.

    //difference between Structure and class.
    //1. The only difference between structure and classes is that:
        //-> The member function of structure are by default public and 
        //-> The member of class are bydefault private.

    private: int a, b;
    public: int c;

    void setData(int, int);//function declaration.
    void showData(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of c is : "<<c<<endl;
    }

};

//definition of employee class function.
void Employee :: setData(int a1, int b1){
    a= a1;
    b= b1;
}

int main(){

    cout<<"Creating a class with Public and private members."<<endl<<endl;

    Employee e1;
    e1.c= 4;
    e1.setData(1, 2);
    e1.showData();
    
    //getch();
    return(0);
}