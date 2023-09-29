//Write a program to This pointer in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Classes code is here.
class Example{
    int a, b;

    public:
    // void setData(int a, int b){
    //     //In this case local and class members name are same that's why this will throw some problems.
    //     //a= a; 
    //     //b= b;
    //     //and to avoid this problem we will have to use this pointer here.
    //     this->a= a;
    //     this->b= b;
    //     //This will work perfectly.
    // }

    Example & setData(int a, int b){
        this->a= a;
        this->b= b;
        return *this;
    }

    void getData(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl<<endl;
    }
};

int main(){
    cout<<"this pointer in C++ programming\n"<<endl;

//Notes:
    //this is a keyword which is a pointer which points to the object which invokes the member function and variables.
    
    Example *ptr= new Example;
    // ptr->setData(5, 10);
    // ptr->getData();
    
    //we can also do like this in the case 2 of the function.
    ptr->setData(10, 20).getData();

    //getch();
    return(0);
}