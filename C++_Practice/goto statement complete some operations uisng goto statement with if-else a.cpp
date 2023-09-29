/* Code a softare to complete some operations using "goto statement with if-else" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

    int main(){
        system("color 02");
            
            /* **** complete some operations uisng "goto statement with if-else" ****. */
        int a, i;
        level_1:
        cout<<"Enter a number here to get table. but number is less than 10 = "; cin>>a;
        if(a< 10){
            for(i= 1; i<= 10; i++){
                cout<<a<<"*"<<i<<"="<<(a* i)<<endl;
            }}else{
                cout<<"you number is greater than 10 please try again. & press any key to try again."<<endl<<endl;
                getch();
                goto level_1;
            }
    
    getch();
    return 0;
    }
