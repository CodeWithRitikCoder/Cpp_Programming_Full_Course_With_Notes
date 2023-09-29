//Write a program to Understand File handling in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
#include"fstream"
using namespace std;
int main(){
    cout<<"File handling in C++ programming\n"<<endl;
    
/*
Notes:
    What is File handling in C++ programming ?
    -> File handling is a way to contrubute with the files in C++ programming.
    
    What is file ?
    -> File is a set of informations.

    --> The useful classes for working with files in C++ programming are:
    1. fstream - base --> this is main header file you will have to include it before hadling the files.
    2. ofstream --> derived from fstreambase. -> and this class is used to in data in to the file.
    3. ifstream --> derived from fstreambase. -> and this class is used to out data form the file.

    -> In order work with files in C++, you will have to open it. properly, there are 2 ways to open a file:
    1. Using the constructor.
    2. Using the member function open() of the class.
*/

    string str1= "Ritik is back in C++ programming. and I have done coding diploma";
    string str2= "Hello world";
    // 1. Opening file using constructorj and writing it into the file
    ofstream out("simpleFile1.txt"); //Writing operation in to file.
    out<<str1<<endl<<str2;

    // 2. Opening file using constructorj and reading it from the file
    //ifstream in("simpleFile1.txt"); //reading operation from file.
    //out<<str1;

    
    //getch();
    return(0);
}