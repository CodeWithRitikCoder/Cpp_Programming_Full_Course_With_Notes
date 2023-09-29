/* Code a software to File Handlidng in C++. */
#include<iostream>
#include<conio.h>
#include"fstream"//To use File Handling.
using namespace std;

    int main(){
        system("color 02");
            
            /* **** File Handling ****. */
            string str1;
            ofstream fout;
            cout<<"Enter your string1 here = ";
            getline(cin, str1);//To Store Data with Space.
            // cin>>str1; //To Store Data without Space.
            fout.open("FileHandlingProgram.txt");
            cout<<"Press any key to Store your Data in File. to skip [Ctrl] key only."<<endl;
            getch();
            fout<<str1;        
            fout.close();
            cout<<"Press any key to check your data is Stored or not in File. to skip [Ctrl] key only."<<endl;
            getch();
            cout<<"Your data is Successfully Write in File."<<endl;
            cout<<"Press any key to Access your Data form File. to skip [Ctrl] key only."<<endl;
            getch();
            ifstream fin;
            string str2;
            fin.open("FileHandlingProgram.txt");
            getline(fin, str2);//To Access Data With Space.
            // fin>>str2; //To Access Data without space.
            cout<<"Your Data is = "<<str2<<endl;
            fin.close();

            cout<<"Press any key to Close your Software. to skip [Ctrl] key only."<<endl;
    getch();
    return 0;
    }
