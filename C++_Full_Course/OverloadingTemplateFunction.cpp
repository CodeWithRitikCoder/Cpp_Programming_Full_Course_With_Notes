//Write a program to Overloading template function in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Classes code is here.
template <class T>
class MyClass{
    T data;
    
    public :
    MyClass(T a){
        data= a;
    }

    void display();
};

template <class T>
void MyClass<T>::display(){
    cout<<"The value of data is : "<<data<<endl;
}

void fun1(int a){
    cout<<"The value of a inside the Normal function is : "<<a<<endl;
}

template <class T>
void fun1(T a){
    cout<<"The value of a inside the templatized function is : "<<a<<endl;
}

int main(){
    cout<<"Overloading template function in C++ programming\n"<<endl;
    
    MyClass <float> mC1(10.30);
    mC1.display();

    fun1(4); // Exact match takes the highest priority.
    fun1(4.30); 
    
    //getch();
    return(0);
}