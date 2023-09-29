/* Code a software to Create a list and use some list function on the list and print all that using "some list functions." in C++. */
#include<iostream>
#include<conio.h>
#include"list"
using namespace std;

    int main(){
        system("color 02");
            
            /* **** List ****. */
            list<int> l1{40, 60, 10, 45, 55};
            list<int> :: iterator o= l1.begin();
            while(o!= l1.end()){
                cout<<*o<<" ";
                o++;
            }cout<<"= This is your list elements."<<endl;

            l1.sort();
            list<int> :: iterator p= l1.begin();
            while(p!= l1.end()){
                cout<<*p<<" ";
                p++;
            }cout<<"= This is your sorted list elements."<<endl;

            cout<<"Number of element in your list one = "<<l1.size()<<endl;

            l1.push_back(100);
            list<int> :: iterator q= l1.begin();
            while(q!= l1.end()){
                cout<<*q<<" ";
                q++;
            }cout<<"= here I'm added one element at the end of list."<<endl;

            l1.push_front(200);
            list<int> :: iterator r= l1.begin();
            while(r!= l1.end()){
                cout<<*r<<" ";
                r++;
            }cout<<"= here I'm added also one element at the starting of list."<<endl;

            l1.reverse();
            list<int> :: iterator s= l1.begin();
            while(s!= l1.end()){
                cout<<*s<<" ";
                s++;
            }cout<<"= This is reverse form of your list elements."<<endl;

            l1.pop_back();
            list<int> :: iterator t= l1.begin();
            while(t!= l1.end()){
                cout<<*t<<" ";
                t++;
            }cout<<"= here I'm deleted one element at the and of list."<<endl;

            l1.pop_front();
            list<int> :: iterator u= l1.begin();
            while(u!= l1.end()){
                cout<<*u<<" ";
                u++;
            }cout<<"Here I'm deleted also one element at the starting of list."<<endl;

            l1.remove(55);
            list<int> :: iterator v= l1.begin();
            while(v!= l1.end()){
                cout<<*v<<" ";
                v++;
            }cout<<"= remove 55 from the list."<<endl;

            l1.clear();
            list<int> :: iterator w= l1.begin();
            while(w!= l1.end()){
            cout<<*w<<" ";
            w++;
            }cout<<"Here I cleared the whole list elements."<<endl;

            list<int> :: iterator x= l1.begin();
            while(x!= l1.end()){
                cout<<"*x"<<" ";
                x++;
            }cout<<" printing of list elements. after clear() function."<<endl;
            cout<<"There is no any element in the list because of I cleared."<<endl;


    // getch();
    return 0;
    }

