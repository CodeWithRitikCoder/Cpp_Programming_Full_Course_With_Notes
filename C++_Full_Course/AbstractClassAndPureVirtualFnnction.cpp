//Write a program to use Virtual function in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//classes code is here.
class Base{
    public:
    int var_base= 10;
    // virtual void displayData(){
    //     cout<<"Displaying Base class variable var_base : "<<var_base<<endl<<endl;
    // }

    //This is pure virtual function we will have to define this function in the Derived classes then this will work fine other wise this will throw and error. if you don't define this function inside the derived class.
    virtual void displayData()= 0; //Do nothing function ---> pure virtual function.
};

class Derived : public Base{
    public:
    int var_Derived= 20;

    //if there is not this desplayData function in this class this will run automically base class displayData function.
    //You can try it by using commands. this won't throw any error.
    void displayData(){
        cout<<"Displaying Base class variable var_base : "<<var_base<<endl;
        cout<<"Displaying Derived class variable var_Derived : "<<var_Derived<<endl<<endl;
    }
};

int main(){
    cout<<"Abstract class and virtual function in C++ programming\n";

/*
Notes:
    What is abstract class and virtual function ?
    --> We can't create abjects of abstract classes.
    --> abstract and pure virtual function they are related with each other.
    --> abstract class is used to create derived class.
    --> 
*/
    
    //Object creation of the both classes.
    Derived derivedClassObject;

    //Pointer variable creation of the both classes.
    Base *baseClassPointer;
    Derived *derivedClassPointer;
    
    baseClassPointer= &derivedClassObject; //Pointing base class pointer to derived class.

    //baseClassPointer->var_derived= 100; // this will throw an error
    baseClassPointer->displayData();
    
    //getch();
    return(0);
}