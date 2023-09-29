//Write a program to use Mulitiple inheritance in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Classes code is here.
class Base1{
    protected:
    int num1;
    
    public:
    void setNum1(int a1){
        num1= a1;
    }
};

class Base2{
    protected:
    int num2;
    
    public:
    void setNum2(int a2){
        num2= a2;
    }
};

class Derived: public Base1, public Base2{
    public:
    void getResult(){
        cout<<"The value of Num1 is : "<<num1<<endl;
        cout<<"The value of Num2 is : "<<num2<<endl;
        cout<<"The sum of Num1 and Num2 is : "<<(num1+ num2)<<endl;
    }
};

int main(){
    cout<<"Multiple inheritance in C++ programming\n";
    
    Derived d1;
    d1.setNum1(5);
    d1.setNum2(15);
    d1.getResult();
    
    //getch();
    return(0);
}