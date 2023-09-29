//Write a program to use Friend function of two classes in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//forword declaration of class Y.
class Y;

class X{
    int num1;

    public: 
    void setValue(int valu1){
        num1= valu1;
    }

    friend void add(X, Y);//declaration of a another function as a Friend function in this class.
};

class Y{
    int num2;

    public: 
    void setValue(int value2){
        num2= value2;
    }

    friend void add(X, Y);//declaration of a another function as a Friend function in this class.
};

//This is the friend function of class X and class Y.
void add(X x1, Y y1){
    cout<<"The sum of class X num1 and class Y num2 is : "<<(x1.num1+ y1.num2);
}

int main(){
    cout<<"Friend function of two classes in C++ programming\n";
    
    X x;
    x.setValue(4);

    Y y;
    y.setValue(7);

    add(x, y);
    
    //getch();
    return(0);
}