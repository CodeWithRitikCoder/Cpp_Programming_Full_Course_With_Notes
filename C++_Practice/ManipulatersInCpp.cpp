/* Code a software to use of Manipulators formate lines & field in output in C++ with RitikCdoer. */
#include<iostream>
#include<conio.h>
#include"iomanip"
using namespace std;

    int main(){
        system("color a");
            
            /* **** Manipulator in Cpp with RitikCoder ****. */
            //Mostly Two most commanly used manipulators in C++.
            //(1).= endl;
            //(2).= setw();
            //and We'll have to include a header file which is #include"iomanip".
            int a= 10, b= 1234, c= 12345;
            //here I'm using "setw().";
            cout<<"The value of A = "<<setw(5)<<a<<endl;
            cout<<"The value of B = "<<setw(5)<<b<<endl;
            cout<<"The value of C = "<<setw(5)<<c<<endl;
            //here I'm using "endl;"
            cout<<"The value of A = "<<a<<endl;
            cout<<"The value of B = "<<b<<endl;
            cout<<"The value of C = "<<c<<endl;

    //getch();
    return (0);
    }
