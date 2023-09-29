//Write a program to use Enum in C++ Programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;
int main(){

    //What is enum in C++ Programming ?
    //-> 

    enum Meal {breakfast, lunch, dinner};

    //Printing the index of Enum items.
    cout<<"The breakfast is at index of enum : "<<breakfast<<endl;
    cout<<"The lunch is at index of enum : "<<lunch<<endl; 
    cout<<"The dinner is at index of enum : "<<dinner<<endl; 

    //Printing the index of Enum item usingin enum reference.
    Meal m1= breakfast;

    cout<<endl<<"The index of breakfast of meal is : "<<m1<<endl<<endl;

    //Condition checking of enum items.
    if(breakfast== 1){
        cout<<"Fine. Its Okay"<<endl<<endl;
    }else {
        cout<<"Damit. Its not Okay"<<endl<<endl;
    }

    //Condition checking of enum items.
    if(m1== 0){
        cout<<"Fine. Its Okay";
    }else {
        cout<<"Damit. Its not Okay";
    }
    
    //getch();
    return(0);
}