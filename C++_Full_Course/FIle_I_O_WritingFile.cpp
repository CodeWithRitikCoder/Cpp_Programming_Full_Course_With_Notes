//Write a program to Wrting data in to the file in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
#include"fstream"
using namespace std;
int main(){
    cout<<"Wrting data in to the fiel in C++ programming\n"<<endl;

    string str1= "Writing data in to the file sing constructor.";
    int a= 50;

    // 1. Opening file using constructorj and writing it into the file
    ofstream out("simpleFile1.txt"); //Writing operation in to file.
    out<<str1;

    cout<<str1<<" : it have been written successfully in to the file.";
    
    //getch();
    return(0);
}