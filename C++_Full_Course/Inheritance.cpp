//Write a program to Understand Inheritance in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;
int main(){
    cout<<"Inheritance in C++ programming\n";

//Notes:
    //What is inheritance in C++ programming ?
    //-> The concept of Code resubility in C++ is supported by using inheritance.
    //-> We can reuse the properites of an existing class by inheriting from it.
    //-> The existing class is called - Base Class, Super Class and Parent Class.
    //-> The new class which is inherited is called as the - Derived class, sub Class and Child class.
    //-> Inheritance is a featur of OOPs.
    //-> Inheritacne is a way to avoid rewriting code by using Extending another class.
    //-> In C++ programming we can reuse a class and add additonal features to it.
    //-> Reusing classes saves time and money.
    //-> Reusing already tested and debugged class will save a lot of effort of developing and debugging the same thing again.

//Types of inheritence in C++ programming.
    //-> There are five (5) type of inheritance in C++ programming.
        //1. Single inheritance.
        //2. Multiple inheritance.
        //3. Hierarchical inheritance.
        //4. Multilevel inheritance.
        //5. Hybrid inheritance.

    // Single inheritance.
        //-> A Derived class with only one Base class that is called single inheritance.
            //for ex-> classA{}
            //            |
            //         classB{}

    //Multiple inheritance.
        //-> A Derived class with more then one Base classes.
            //for ex-> classA1{} classA2{} ....
            //               |    |
            //              classB{}

    //Hierarchical inheritance.
        //-> Several Derived classes from a single Base class.
            // for ex->      classA{}
            //               |    |
            //         classB1{} classB2{} .....

    //Multilevel inheritance.
        //-> Driving a class from already Derived class.
            // for ex->  classA{}
            //              |    
            //           classB{}
            //              |    
            //           classC{}
            //              .
            //              .
            //              .

    //Hybrid inheritance.
        //-> Hybrid inheritance is a combination fo multiple inheritacne and multilevel inheriance.
            // for ex->      classA{}
            //               |    |
            //         classB1{} classB2{}
            //               |    |
            //              classC{}
//Syntax to extend the class.
    //Syntax-> class ClassName : {{visibility mode}} {{ClassName}}

//Visibility modes in inheritance.
    //-> Visibility mode can be private or public in inheritance.
    //-> By default visibility mode is private.
    //-> Public visibility mode -> Public members of the Base class becomes Public members of the Derived class.
    //-> Private visibility mode -> Public members of the Base class becomes Private members of the Derived class.

    //-> Private members are never inherited of the Base class.
    
    //getch();
    return(0);
}