//Write a program to use Inline function in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//function definition.
inline int product(int a, int b){
    return (a* b);
}

int main(){

//Notes.
    //What is inline function.
    //-> Inline functions are used to reduce the function call. When one function is being called multiply times in the 
    // program it increases the execution time, so inline function is used to reduce time and increase program 
    // efficiency. If the inline function is being used when the function is called, the inline function extends the 
    // whole function code at the point of a function call, instead of running the function, inline functions are 
    // considered to be used when the function is small otherwise it will not perform well. Inline is not 
    // recommended when static variables are being used in the function.

    //-> never use inline functions in the Recursion.

    cout<<"Inline function in C++ programming."<<endl<<endl;
    
    int a= 2, b= 3;
    cout<<"The product of a and b is : "<<product(a, b)<<endl;
        
    
    //getch();
    return(0);
}