//Write a program to use function nature Takes nothing -- Return something in C++ programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;

//funciton prototype/decleration.
int function2(void);

int main(){

    cout<<"Function -- Takes nothing -- Return something _ Nature."<<endl<<endl;

    cout<<endl<<"The answer is : "<<function2();//function call  
    
    //getch();
    return(0);
}

//function definition.
int function2(void){
    int a, b;
    cout<<"Enter first number here : ";
    cin>>a;
    cout<<"Enter second number here : ";
    cin>>b;

  return (a- b);
}
