//Write a program to Understand Virtual function in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//classes code is here.
class Base{
    public:
    int var_base= 10;
    virtual void displayData(){
        cout<<"Displaying Base class variable var_base : "<<var_base<<endl<<endl;
    }
};

class Derived : public Base{
    public:
    int var_Derived= 20;

    //if there is not this desplayData function in this class this will run automically invoke base class displayData function.
    //You can try it by using commands. this won't throw any error.
    void displayData(){
        cout<<"Displaying Base class variable var_base : "<<var_base<<endl;
        cout<<"Displaying Derived class variable var_Derived : "<<var_Derived<<endl<<endl;
    }
};

int main(){
    cout<<"Simple sinppit for C++ programming\n";

//Notes:
    /*
    What is virtual function ?
    -> Virtual function is nothing It is used when we want to late binding.
    -> It menas suppose - we hava a base class pointer and it has derived class reference. 
    -> then we will try to call using base class pointer this will call base class functions only.
    -> if we want to class derived class functions then we will have to del
    

    *-> Reules for virtual functions.
    1. They cannot be static.
    2. They are accessed by object pointers.
    3. Virtual functions can be a friend of another class.
    4. A virtual function in base class might not be used.
    5. If a virtual function is defined in a base class, there is not necessity of redefining it in the derived class.
    */

    //Object creation of the both classes.
    Base baseClassObject;
    Derived derivedClassObject;

    //Pointer variable creation of the both classes.
    Base *baseClassPointer;
    Derived *derivedClassPointer;
    
    baseClassPointer= &derivedClassObject; //Pointing base class pointer to derived class.

    //baseClassPointer->var_derived= 100; // this will throw an error
    baseClassPointer->displayData();

    // derivedClassPointer= &derivedClassObject;
    // derivedClassPointer->var_Derived= 250;
    // derivedClassPointer->displayData();
    
    
    //getch();
    return(0);
}