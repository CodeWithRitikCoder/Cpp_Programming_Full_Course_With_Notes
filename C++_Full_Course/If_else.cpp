//Write a program to If - else in C++ Programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;
int main(){
    
    //To get notes of if - else goto to "ControlStatemt.cpp" file.

    int age= 0;

    cout<<"Enter your age here : ";
    cin>>age;

    if(age >= 18 && age < 70){
        cout<<"You can drive because of your age is : "<<age;
    }else {
        cout<<"You can't drive because of your age is : "<<age;
    }
    
    //getch();
    return(0);
}