/* Code a software to file handling this program is used to print already existed char data from file with space usig String in C++. */
#include"iostream"
#include"conio.h"
#include"fstream"
using namespace std;

    int main(){
        system("color 02");
            
            /* **** File handling. ****. */
            cout<<"\t RitikCoder is Back."<<endl;

            ofstream fout ("5PrintAlreadyExistedDataWithSpaceFile.txt");
            string str1= "This program is used to print already existed char data from file with space using String.";
            fout<<str1;
            fout.close();

            ifstream fin;
            string str2;
            fin.open("5PrintAlreadyExistedDataWithSpaceFile.txt");
            getline(fin, str2);
            cout<<str2;
            fin.close();

     getch();
    return 0;
    }

