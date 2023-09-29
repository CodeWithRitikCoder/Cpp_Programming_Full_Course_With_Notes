//Write a program to ------------ with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//forword declaration.
class Class2;

class Class1{
    int val1;

    public:
    void setValue(int a1){
        val1= a1;
    }
    
    void display(void){
        cout<<val1<<endl;
    }

    //Friend function declaration.
    friend void swap(Class1 &, Class2 &);
};

class Class2{
    int val2;

    public:
    void setValue(int a2){
        val2= a2;
    }
    
    void display(void){
        cout<<val2<<endl;
    }

    //Friend function declaration.
    friend void swap(Class1 &, Class2 &);
};

void swap(Class1 &a, Class2 &b){
    int temp= a.val1;
    a.val1= b.val2;
    b.val2= temp;
}

int main(){
    cout<<"Simple sinppit for C++ programming\n";
    
    Class1 c1;
    c1.setValue(24);
    c1.display();

    Class2 c2;
    c2.setValue(15);
    c2.display();

    swap(c1, c2);//function call

    cout<<"The swaped value of Class1 val1 is : ";
    c1.display();

    cout<<"The swaped value of Class2 val2 is : ";
    c2.display();
    
    //getch();
    return(0);
}