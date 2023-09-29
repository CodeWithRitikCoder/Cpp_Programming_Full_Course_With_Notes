/* Code a software to print sum of some arguments using "Function overloading" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//functions here.
int sum(int a, int b){
    cout<<"Using function with 2 arguments."<<endl;
    return(a+ b);
}
int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments."<<endl;
    return(a+ b+ c);
}

    int main(){
        system("color 02");

    /* **** Use of "Function overlaoding" ****. */
    int a, b, c;
    cout<<"The sum of 3 and 6 is = "<<sum(3, 6)<<endl;
    cout<<"The sum of 3, 7 and 6 is = "<<sum(3, 7, 6)<<endl;
    
    getch();
    return 0;
    }
