//Write a program to use Constructor in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

int main(){
    cout<<"Constructor of Class in C++ programming\n";

//Notes:
    //What is Constructor in C++ programming ?
    //-> Constructor is a special member function with same name as the class name.
    //-> It is used to initialize the object of it's class.
    //-> and constructor has no return type.
    //-> className(argument type){ code to be execute } // constructor declaration.
    //-> and the constructor is automatically invoked when the object is created of a class.

//Characteristic of constructor.
    //1. It should be declared in the public section of the class.
    //2. They are autometically invoked whenever the object is created.
    //3. It is used to initialized the objects of it's class.
    //4. They cannot return values and do not have return type.
    //5. It can have default arguments.
    //6. It cannot refer to their address.

//Types of Constructor in C++ programming.
    //There are three types of constructor in C++ programming.
        //1. Default constructor. -> className(void){   }
        //2. Parameterized constructor. -> className(parameters){   }  
        //3. Copy constructor. -> className(ClassName &varName){    }
            //-> There is no need to create copy constructor.
            //-> When no copy constructor is found, compiler supplies it's own copy constructor.
            //-> if you won't create copy constructor then program will never throw an error.
            //-> className objectName(pass object)// this will automically invoked copy constructor.
    
    //getch();
    return(0);
}