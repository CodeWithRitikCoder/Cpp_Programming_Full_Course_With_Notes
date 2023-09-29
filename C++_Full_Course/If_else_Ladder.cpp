//Write a program to use If - else ladder in C++ Programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;
int main(){
    
    //To get notes of if - else ladder goto to "ControlStatemt.cpp" file.

    int age= 0;

    cout<<"Enter your age here : ";
    cin>>age;

    if(age== 0){
        cout<<"You have ented invalid age.";
    }
    else if(age >= 18 && age <= 70){
        cout<<"You can drive because of your age is : "<<age;
    }
    else if(age >= 70){
        cout<<"You can't drive because of your age is : "<<age;
    }else {
        cout<<"Currently you can't drive and your can drive after some time.";
    }
    
    //getch();
    return(0);
}