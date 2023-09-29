//Write a program to function template in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//function is here.
template <class B>
B fun1(B a, B b){
    if(a> b){
        return (a);
    }else {
        return (b);
    }
}

int main(){
    cout<<"Function template in C++ programming\n"<<endl;
    
    int greaterNumberInt= fun1(20, 30);
    cout<<"The greater number is : "<<greaterNumberInt<<endl;

    float greaterNumberFloat= fun1(20.6, 20.8);
    cout<<"The greater number is : "<<greaterNumberFloat<<endl;

    char greaterNumberChar= fun1('d', 'b');
    cout<<"The greater character is : "<<greaterNumberChar<<endl;
    
    //getch();
    return(0);
}