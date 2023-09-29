//Write a program to use Switch case in C++ programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;
int main(){

    //Ask from the user Which is your Dream car using Switch case in C++ programming.
    
    cout<<"Q-1 Which is your Dream Car ?"<<endl;
    cout<<"     1. Rolls Royce"<<endl;
    cout<<"     2. Thar"<<endl;
    cout<<"     3. Mastang"<<endl;
    cout<<"     4. BMW"<<endl;
    cout<<"Select an option."<<endl;
    cout<<"Enter your Selected numer here : ";
    int selectedCar;
    cin>>selectedCar;
    
    switch(selectedCar){
        case 1: {
            cout<<"     *** You got selected Rolls Royce...";
            break;
        }
        case 2: {
            cout<<"     *** You got selected Thar...";
            break;
        }
        case 3:{
            cout<<"     *** You got selected Mastang...";
            break;
        }
        case 4:{
            cout<<"     *** You got selected BMW...";
            break;
        }
        default : {
            cout<<"     *** invalid selection ..... !!";
        }
    }
    
    
    //getch();
    return(0);
}