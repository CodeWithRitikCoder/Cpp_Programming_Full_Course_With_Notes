/* Code a software to find out table of any number with default paramenters using "Function with take something-return nothing" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void table(int a){
    for(int i= 1; i<= 10; i++){
        cout<<a<<" * "<<i<<" = "<<(a* i)<<endl;
    }
    cout<<"Here this is the complete table of = "<<a;
}

    int main(){
        system("color 02");

        /* **** Use of "Defult Pratmenters/Arguments" ****. */
       int x= 5;
       table(x);

    getch();
    return 0;
    } 
