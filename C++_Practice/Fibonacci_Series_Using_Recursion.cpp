/* Code a software to pirnt till the (N) number of fibonacci series using Recursive funciton in C++. */
#include<iostream>
#include<conio.h>
using namespace std;

//Recursive function is here to print fibonacci series.
int fib_recursive(int n){
    if(n== 1 || n== 2){
        return(n- 1);
    }else{
        return(fib_recursive(n- 1)+ fib_recursive(n- 2));
    }
}

    int main(){
        system("color 02");
            
            /* **** Print fibonacci series using Recursion ****. */
        int a;
        again://goto level declaration.
        cout<<"Enter your till number here = ";
        cin>>a;
        if(a== 0){
        cout<<"Please Enter valid number here and upto 0."<<endl;
        goto again;
        }
        cout<<"Your fib number is at "<<a<<" = "<<fib_recursive(a);

    // getch();
    return 0;
    }
