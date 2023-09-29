//Write a program to use Static data member variable and function in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

class Employee{

    int id;
    static int counter;

    public: 
    void setId(void);
    void getId(void);
    static void getTotoalEmployeeCount();

//We can also code a static function like this.m as well as like second one.
    // static void getTotalCount(){
    //     cout<<"Test version.";
    // }

};

int Employee :: counter; //definition outside of the class and the default value of static variable is 0 (zero).

void Employee :: setId(void){
    cout<<"Enter employee Id : ";
    cin>>id;
    counter++;
}

void Employee :: getId(void){
    cout<<"The Employee id is : "<<id<<" and Employee no is : "<<counter<<endl;
}

void Employee :: getTotoalEmployeeCount(){
    cout<<endl<<"The total count of Empoyees are : "<<counter<<endl;
}

int main(){

    cout<<"Static data member variable and functions in C++ programming.\n";

    Employee e1, e2, e3, e4;
    e1.setId();
    e1.getId(); 

    e2.setId();
    e2.getId();

    e3.setId();
    e3.getId(); 

    e4.setId();
    e4.getId(); 

    Employee::getTotoalEmployeeCount();
    //Employee::getTotalCount();
    
    //getch();
    return(0);
}