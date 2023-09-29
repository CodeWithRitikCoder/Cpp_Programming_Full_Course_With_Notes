/* Code a software to Create a list using "some list functions." in C++. */
#include<iostream>
#include<conio.h>
#include"list"
using namespace std;

    int main(){
        system("color 02");
            
            /* **** List ****. */
            list<int> l1{10, 20, 30, 40};
            list<int> :: iterator p= l1.begin();
            while(p!= l1.end()){
                cout<<*p<<" ";
                p++;
            }

    getch();
    return 0;
    }

