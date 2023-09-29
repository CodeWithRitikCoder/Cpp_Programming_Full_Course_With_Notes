/* Code a software to --------------------------------------- in C++. */
#include<iostream>
#include<conio.h>
using namespace std;
//char b= true;

void forward_Star_pattern(int);
void reverse_Star_pattern(int);

    int main(){
        system("color 02");
        // printf Forward Star pattern like this as down bellow.
            // *
            // * *
            // * * *
            // * * * * It size is depends on the user (N) number.
        //pirnt reverse star pattern like this as down bellow.
        	//* * * * *
        	//* * * *
        	//* * * 
        	//* *
        	//* It size is depends on the user (N) number.
            int a;
            again:
            cout<<"\t1. Prss one to print forword star pattern."<<endl;
            cout<<"\t2. Prss two to print reverse star pattern."<<endl;
            cout<<"\t Enter here your choice = ";
            cin>>a;
            int n;
            if(a== 1){
                cout<<"Enter the limit of star patter = ";
                cin>>n;
                cout<<"you'r entered "<<n<<" Number here."<<endl;
                forward_Star_pattern(n);
            }else if(a== 2){
                cout<<"Enter the limit of star patter = ";
                cin>>n;
                cout<<"You'r entered "<<n<<" Number here."<<endl;
                reverse_Star_pattern(n);
            }else{
                cout<<"You'r selected invalid value please enter valid value."<<endl<<endl;
                goto again;
            }


    getch();
    return 0;
    }

//function defination.
void forward_Star_pattern(int n){
    for(int i= 1; i<= n; i++){
        for(int j= 1; j<= i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void reverse_Star_pattern(int n){
      for(int i= 1; i<= n; i++){
        for(int j= n; j>= i; j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
