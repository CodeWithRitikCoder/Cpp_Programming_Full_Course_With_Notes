//Write a program to use Union in C++ Programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;

//Union is here.
union myunion{
    int id;
    char favChar;
    float salary;
};

int main(){
    
    //What is Union in C++ Programming Language ?
    //-> Union is as similiar as Structure but we can use only one data at time time because of Union awlays use shared memory.
    //-> Union always override the values. 

    union myunion union1;
    union1.id= 30;
    union1.favChar= 'U';

    cout<<"The id is : "<<union1.favChar;
    cout<<"The id is : "<<union1.id;//Here Union will override the values
    
    //getch();
    return(0);
}