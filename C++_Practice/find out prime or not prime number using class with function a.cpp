/* Code a softare to find out prime or not prime number using class with function in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class prime_number{
    public:
    void show_data(int x){
        int i;
        for(i= 2; i<= x; i++){
            if(x% i== 0){
                break;
            }}
            if(x== i){
                cout<<"number is prime.";
            }else{
                cout<<"number is not prime."; 
            }
    }
};
    
    int main(){
        system("color 02");
            
            /* **** findout prime or not prime number ****. */
        cout<<endl<<"\t\tHello RitikCoder."<<endl<<endl;    
        prime_number obj_1;
        int m;
        cout<<"Enter a number here = ";
        cin>>m;
        obj_1.show_data(m);
        

    getch();
    return 0;
    }


