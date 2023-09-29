//Write a program to Reading data from the file in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
#include"fstream"
using namespace std;
int main(){
    cout<<"Reading data from the file in C++ programming\n"<<endl;
    
    string str1;

    // 2. Opening file using constructorj and reading it from the file
    ifstream in("SimpleFile1.txt"); //reading operation from file.
    // in>>str1; // This way is used to read sigle word in a line from the file.
    getline(in, str1); // This getline function is used to read whole line from the file.

    cout<<str1;
    
    //getch();
    return(0);
}