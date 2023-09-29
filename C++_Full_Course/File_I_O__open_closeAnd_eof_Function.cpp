//Write a program to use open(), close() and eof() function of File I O in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
#include"fstream"
using namespace std;
int main(){
    cout<<"open(), close() and eof() function of file I O in C++ programming\n"<<endl;
    
    string str= "My name is Ritik verma.";
    
    ofstream fout;
    //fout.open("SimpleFile1.txt");
    //fout<<str;
    //fout.close();

    string str1;
    ifstream fin;
    fin.open("SimpleFile1.txt");
    // fin>>str1;
    //getline(fin, str1);
    //fin.close();

    //cout<<str1<<endl<<endl;

    //This is used to getdata from the file till the end of the file.
    while(fin.eof()== 0){
        getline(fin, str1);
        cout<<str1<<endl;
    }
    
    //getch();
    return(0);
}