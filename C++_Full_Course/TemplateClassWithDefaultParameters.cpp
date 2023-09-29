//Write a program to use Template class with default parameters in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Classes code is here.
template <class T1= int, class T2= float, class T3= char>
class Ritik{
    T1 a;
    T2 b;
    T3 c;

    public :
    Ritik(T1 a, T2 b, T3 c){
        this->a= a;
        this->b= b;
        this->c= c;
    }

    void display(){
        cout<<"The value of a is : "<<this->a<<endl;
        cout<<"The value of b is : "<<this->b<<endl;
        cout<<"The value of c is : "<<this->c<<endl;
    }
};

int main(){
    cout<<"Template class with default parameters in C++ programming\n"<<endl;
    
    //Template class with default parameters.
    Ritik <>r1(3, 5.5, 'R');
    r1.display();

    //Template class with own parameters.
    cout<<endl;
    Ritik <float, char, int>r2(3.3, 'r', 10);
    r2.display();
    
    //getch();
    return(0);
}