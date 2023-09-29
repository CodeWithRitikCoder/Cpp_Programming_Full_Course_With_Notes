//Write a program to Pointers to Derived classes in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//classes code is here.
class Base{
    public:
    int var_base;
    void displayData(){
        cout<<"Displaying Base class variable var_base : "<<var_base<<endl<<endl;
    }
};

class Derived : public Base{
    public:
    int var_Derived;
    void displayData(){
        cout<<"Displaying Base class variable var_base : "<<var_base<<endl;
        cout<<"Displaying Derived class variable var_Derived : "<<var_Derived<<endl<<endl;
    }
};

int main(){
    cout<<"Pointers to derived classes in C++ programming\n"<<endl;
        
    //Object creation of the both classes.
    Base baseClassObject;
    Derived derivedClassObject;

    //Pointer variable creation of the both classes.
    Base *baseClassPointer;
    Derived *derivedClassPointer;
    
    baseClassPointer= &derivedClassObject; //Pointing base class pointer to derived class.

    baseClassPointer->var_base= 50;
    //baseClassPointer->var_derived= 100; // this will throw an error
    baseClassPointer->displayData();

    derivedClassPointer= &derivedClassObject;
    derivedClassPointer->var_Derived= 250;
    derivedClassPointer->displayData();

    
    //getch();
    return(0);
}