//Write a program to Use continue Statement in C++ programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;
int main(){
    
    //Note.
    //What is Continue Staement in C++ programming ?
    //-> Continue statement is used to continue that particular statement using some contitions in C++ programming.

    int a;
    for(int i= 1; i<= 5; i++){
        cout<<"Enter a numer here : ";
        cin>>a;

        if(a== 10){
            continue;
        }else{
            cout<<"You have entered : "<<a<<endl;
        }
    }       
    
    //getch();
    return(0);
}