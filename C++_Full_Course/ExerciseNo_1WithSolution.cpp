//Write a program to Solve Exercise No- 1 with solution in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
#include"cmath"
using namespace std;

//Classes code is here.
class SimpleCalculator{
    int a, b;
    public:
    void getDataSimple(){
        cout<<"Enter the value of a : ";
        cin>>a;
        cout<<"Enter the value of b : ";
        cin>>b;
    }

    void performOperationsSimple(){
        cout<<endl<<"The value of a + b is : "<<(a+ b)<<endl;
        cout<<"The value of a - b is : "<<(a- b)<<endl;
        cout<<"The value of a * b is : "<<(a* b)<<endl;
        cout<<"The value of a / b is : "<<(a/ b)<<endl;
    }
};

class ScientificCalculator{
    int a, b;
    public:
    void getDataScientific(){
        cout<<"Enter the value of a : ";
        cin>>a;
        cout<<"Enter the value of b : ";
        cin>>b;
    }

    void performOperationsScientific(){
        cout<<endl<<"The value of cos(a) is : "<<cos(a)<<endl;
        cout<<"The value of sin(a) is : "<<sin(a)<<endl;
        cout<<"The value of exp(a) is : "<<exp(a)<<endl;
        cout<<"The value of tan(a) is : "<<tan(a)<<endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    
};

int main(){
    cout<<"Exercise no-1 with solution in C++ programming\n";

//Note:
    //Exercise no- 1 ?
    //-> Create two (2) classes:
        //1. SimpleCalculator-> Takes input of 2 numbers using a utility function and performs operations (+, -, *, /) and      displays the result using another function.
        //-> ScientificCalculator-> Takes input of 2 numbers using a utility function and performs any four scientific operation of your choice and displays the result using anther function.

        //-> Create another class HybridCalculator and inherit it using these 2 classes.
            //Q-1. What type of inheritance are you using ?
            //Ans-> I am using Multiple inheritance here.
            //Q-2. Which mode of inheritance are you using ?
            //Ans-> class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
            //Q-3. Create an object of HybridCalculator and dsiplay results of simple and scientific calculator.
            //Q-4. How is code reusability implemented ?

    // SimpleCalculator calc;
    // ScientificCalculator calc;
    // calc.getData();
    // calc.performOperationsScientific();

    HybridCalculator hc;
    hc.getDataSimple();
    hc.performOperationsSimple();
    cout<<endl;
    hc.getDataScientific();
    hc.performOperationsScientific();
    
    //getch();
    return(0);
}