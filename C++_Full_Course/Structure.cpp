//Write a program to use Structure in C++ Programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;

//This is my Employee Structure.
typedef struct employee{
        int id;
        char favChar;
        float salary;
    }empStructure;

int main(){

    //What is Structure in C++ Programming Language.
    //-> Structure is a Data type that is the collection of different different types of data types.

    struct employee Rohan;
    Rohan.id= 102;
    Rohan.favChar= 'R';
    Rohan.salary= 12500.5;

    cout<<"The id of Rohan is : "<<Rohan.id<<endl;
    cout<<"The favChar of Rohan is : "<<Rohan.favChar<<endl;
    cout<<"The salary of Rohan is : "<<Rohan.salary<<endl;

    empStructure Sachin;
    Sachin.id= 103;
    Sachin.favChar= 'S';
    Sachin.salary= 1500.5;

    cout<<endl<<"The id of Sachin is : "<<Sachin.id<<endl;
    cout<<"The favChar of Sachin is : "<<Sachin.favChar<<endl;
    cout<<"The salary of Sachin is : "<<Sachin.salary<<endl;
    
    //getch();
    return(0);
}