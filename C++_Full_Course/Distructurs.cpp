//Write a program to use Distructor in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

int count= 0;

class Class1{
    public:
    //constructor definition.
    Class1(void){
        count++;
        cout<<"This is the time when constructor is called for object number : "<<count<<endl;
    }

    //Distructor definition.
    ~Class1(){
        cout<<"This is the time when distructor is called for object number : "<<count<<endl;
        count--;
    }

};

int main(){
    cout<<"Distructor in C++ programming\n";
    
//Notes:
    //What is Distructor in C++ programming ?
    //-> Distructor is used to free initialized memory before destroing the object.
    //-> Distructor never takes an arguments and also it has no return type. that's why it doesn't return any value.
    //-> Syntex of distructor -> ~className(){  }

    cout<<"I am inside the main function."<<endl;

    cout<<"Creating the first object of class1."<<endl;
    Class1 c1;
    {
        cout<<"Entering the block."<<endl;
        cout<<"Creating two more objects of class 1."<<endl;
        Class1 c2, c3;
        cout<<"Exiting the block."<<endl;
    }
    cout<<"Back to the main function."<<endl;

    
    //getch();
    return(0);
}