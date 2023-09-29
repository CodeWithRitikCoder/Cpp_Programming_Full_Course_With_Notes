//Write a program to use constructor with default arguments with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//class declaration.
class SimpleClass{
    int a, b;

    public:
    SimpleClass(int a1, int b1= 5){
        a= a1; 
        b= b1;
    }

    void printData(void){
        cout<<"The value of a is : "<<a<<" and b is : "<<b<<endl;
    }

};

int main(){
    cout<<"Constructor with default argument in C++ programming\n";
    
    SimpleClass s1(4); //Constructor calling with default arguments while object creating.
    s1.printData();

    SimpleClass s2(6, 8); //Constructor calling with no default arguments while object creating.
    s2.printData();

    //getch();
    return(0);
}