/* Code a software to print some values and sum of that arguments values using "Function overloading" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//functions here.
int sum(int a, int b){
    cout<<"usng function with 2 arguments."<<endl;
    cout<<"A = "<<a<<endl<<"B = "<<b<<endl;
    return(a+ b);
}
int sum(int x, int y, int z){
    cout<<"usng function with 3 arguments."<<endl;
    cout<<"X = "<<x<<endl<<"Y = "<<y<<endl<<"Z = "<<z<<endl;
    return(x+ y+ x);
}

    int main(){
        system("color 02");

    /* **** Use of "Function overlaoding" ****. */
    int a, b;
    cout<<"Enter the value of A = "; cin>>a;
    cout<<"Enter the value of B = "; cin>>b;
    cout<<"This is the sum of your 2 arguments = "<<sum(a, b)<<endl;
    int x, y, z;
    cout<<"Enter the value of X = "; cin>>x;
    cout<<"Enter the value of Y = "; cin>>y;
    cout<<"Enter the value of Z = "; cin>>z;
    cout<<"This is the sum of your 3 arguments = "<<sum(x, y, z)<<endl;

    getch();
    return 0;
    }
