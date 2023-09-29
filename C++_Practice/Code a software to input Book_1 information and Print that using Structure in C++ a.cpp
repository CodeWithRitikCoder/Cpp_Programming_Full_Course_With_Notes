/* Code a software to input Book_1 information and Print that using "Structure" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

/* this is my structure here. */
struct Book{
   int Book_id;
   char Name[50];
   float Price;
   int Page;
   char Author[50];
};
struct Book book_1;//globally declaration of structure name & structure variable name.

    int main(){
        system("color 02");

        /* **** Use of "Structure" ****. */
        cout<<"\t\t RitikCoder!"<<endl;
        cout<<"\t Enter your Book_1 information."<<endl<<endl;
        cout<<"Enter your book_1 ID here = "; cin>>book_1.Book_id;
        cout<<"Enter your book_1 Name here = "; cin>>book_1.Name;
        cout<<"Enter your book_1 Price here = "; cin>>book_1.Price;
        cout<<"Enter your book_1 Page here = "; cin>>book_1.Page;
        cout<<"Enter your book_1 Author Name here = "; cin>>book_1.Author;
        
        cout<<endl<<"press any key to see your book_1 information."<<endl;
        getch();

        cout<<endl<<"\t Here this is your book_1 information."<<endl<<endl;
        cout<<"Your book_1 ID is = "<<book_1.Book_id<<endl;
        cout<<"Your book_1 name is = "<<book_1.Name<<endl;
        cout<<"Your book_1 price is = "<<book_1.Price<<endl;
        cout<<"Your book_1 page is = "<<book_1.Page<<endl;
        cout<<"Your book_1 Author name is = "<<book_1.Author<<endl;
        cout<<endl<<"That's all about your Book_1."<<endl;

    getch();
    return 0;
    } 
