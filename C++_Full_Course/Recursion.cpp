//Write a program to use Recursion in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//function definintion for find factorial of N number.
int funFactorial(int n){

    //if(n== 1 || n== 0){
    if(n<= 1){//this condition is also as same as upper one.
        return (1);
    }

    return (n* funFactorial(n- 1));   
}

//function definition for Addition of till the N numbers.
int funAddition(int n){
    if(n< 1){
        if(n== 0){
            return (0);
        }else{
            return (1);
        }
    }

    return (n+ funAddition(n- 1));
}

//function definiton for find Nth index number of Fibonacci series.
int funFibonacci(int n){
    if(n< 2){
        return (1);
    }
    return (funFibonacci(n- 2)+ funFibonacci(n- 1));
}

int main(){

//Notes.
    //What is Recursion in C++ programming ?
    //-> When a function call itself to make the problem easier that is called Recursion.

    int n;
    cout<<"Enter a number here : ";
    cin>>n;

    cout<<"The factorial of "<<n<<" is : "<<funFactorial(n)<<endl;
    cout<<"The Addition of "<<n<<" numbers is : "<<funAddition(n)<<endl;
    cout<<"The Fibonacci number at "<<n<<"th index is : "<<funFibonacci(n);

    //getch();
    return(0);
}