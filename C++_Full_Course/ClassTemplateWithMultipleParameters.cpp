//Write a program to user Class Template with Multiple different different paramenters with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Classes code is here.
template <class T1, class T2>
class MyClass{
    T1 data1;
    T2 data2;

    public:
    MyClass(T1 a, T2 b){
        data1= a;
        data2= b;
    }

    void display(){
        cout<<"The value of Data1 is : "<<this->data1<<endl;
        cout<<"The value of Data2 is : "<<this->data2<<endl;
    }

};

int main(){
    cout<<"Class template with multiple different different parameters C++ programming\n"<<endl;

/*
 Class templates with multiple parameters (one, two or more then two)
 temmplate<class T1, class T2 .....(comma separated)>    // Syntext
*/

    // MyClass <int, int> m1(2, 5);
    // MyClass <int, float> m1(2, 5.7);
    // MyClass <float, float> m1(2.6, 5.7);
    // MyClass <char, float> m1('w', 5.7);
    MyClass <int, char> m1(2, 'r');
    m1.display();
    
    //getch();
    return(0);
}