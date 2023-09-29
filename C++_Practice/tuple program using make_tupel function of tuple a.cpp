/* Code a software to create a tuple program using " make_tupel function of tuple " in C++. */
#include<iostream>
#include<conio.h>
#include"tuple"
using namespace std;

    int main(){
        system("color 02");
            
            /* **** tuple program using make_tupel function ****. */
               tuple<string, string, string>t1;
               t1= make_tuple("RitikCoder", "Rajukumar", "RajKumar");
               cout<<get<0>(t1)<<endl;
               cout<<get<1>(t1)<<endl;
               cout<<get<2>(t1)<<endl;
               cout<<get<2>(t1)<<endl;
    
    return 0;
    }
