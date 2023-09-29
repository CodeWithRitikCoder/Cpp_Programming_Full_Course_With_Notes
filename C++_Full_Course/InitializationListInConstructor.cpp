//Write a program to use Initialization list in Constructor in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Classes Code is here.
class Test{
    int a;
    int b;

    public:
    //There are the ways to initalized member function of a Class using constructor in C++ programming.

    // Test(int i, int j): a(i), b(j){
    // Test(int i, int j): a(i), b(i+ j){
    // Test(int i, int j): a(i), b(2* j){
    // Test(int i, int j): a(i), b(a+ j){
    // Test(int i, int j): a(i), b(b+ j){ //--> RED Flag this will create a problem becasuse a will be initialized first. 
    // Test(int i, int j): a(i){
    //     b= j;  
    Test(int i, int j){
        a= i;
        b= j; 
        cout<<"My name is Constructor of Test Classs."<<endl;
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
    }
};

int main(){
    cout<<"Initialization list in Constructor in C++ programming\n";
    
    Test t1(2, 4);
    
    //getch();
    return(0);
}