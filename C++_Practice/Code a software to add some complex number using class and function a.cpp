// Code a software to add complex number using class and function.
#include"iostream"
#include"conio.h"
#include"stdlib.h"
using namespace std;

    //Detailing work first in C++ language.
    
    //This is a class.
    class complex{//this is a class and complex is the name of class.
        private:
            int a, b;
        public:
            //This is setdata function.
            void setdata(int x, int y){//function definition.
                a= x;
                b= y;}
            //This is showdata funciton.
            void showdata(){//function definition.
                cout<<"A = "<<a<<endl<<endl<<"B = "<<b;}
            //This is add complex number function.
            complex add(complex k){//function definition.
                complex temp;
                temp.a= a+ k.a;
                temp.b= b+ k.b;
                return (temp);}
    };
    //This is main function.
    int main(){

        complex c1, c2, c3;
        c1.setdata(2, 3);//function call.
        c2.setdata(3, 4);//function call.
        c3= c1.add(c2);//function call.
        c3.showdata();//function call.

        getch();
        return 0;
    }
