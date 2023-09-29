//Write a program to Reference Variable in C++ Programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;
int main(){

//Notes.
    //What is Reference Variable in C++ Programming ?
    //-> Reference variable can be defined as another name for an already existing variable.
    //-> These are also called alias.

    int a= 12, b= 10, sum;
    int &add= sum;
    sum= (a + b);
    cout<<"The sum of a and b is : "<<add<<endl;
    cout<<"The sum of a and b is : "<<sum<<endl;    
    
    //getch();
    return(0);
}