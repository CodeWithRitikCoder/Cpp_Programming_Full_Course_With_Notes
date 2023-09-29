/* Code a software to find out which is minimum value in between five(5) value and find out sum of all value in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

    int main(){
        system("color 02");
            
            /* **** print minimum value and sum of all numbers ****. */
        int Enter_number,Array_1[5] , min= Array_1[0], sum= 0;
        cout<<"Enter here five elements of Array_1 = ";
        for(int i= 0; i<= 4; i++){
            cin>>Array_1[i];
        }
        for(int i= 0; i<= 4; i++){
            if(min> Array_1[i]){
                min= Array_1[i];
            }
            sum= sum+ Array_1[i];
            }
            cout<<"Here this is Min value of you given number = "<<min<<endl;
            cout<<"Here this is sum of you given number = "<<sum<<endl;



    getch();
    return 0;
    }   
