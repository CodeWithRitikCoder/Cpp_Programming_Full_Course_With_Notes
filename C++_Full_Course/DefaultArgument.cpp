//Write a program to Use Default argument in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//function definition.
int fun(int a, int b= 5){
    return (a+ b);
}

int main(){

    cout<<"Default Argument in C++ programming."<<endl<<endl;

    int a;
    cout<<"Enter a value here : ";
    cin>>a;  

    cout<<"The result is : "<<fun(a)<<endl;  
    cout<<"The result is : "<<fun(a, 25);  
    
    //getch();
    return(0);
}