/* Code a software to file handling this program is used to print already existed char data from file with space usig for loop in C++. */
#include"iostream"
#include"conio.h"
#include"fstream"
using namespace std;

    int main(){
        system("color 02");
            
            /* **** File handling. ****. */
            cout<<"\t RitikCoder is Back."<<endl;

            ofstream fout ("7PrintAlreadyExistedDataWithSpaceFile.txt");
            string str1= "This program is used to print already existed char data from file only one word using for loop.";
            fout<<str1;
            fout.close();

            ifstream fin;
            string str2;
            fin.open("7PrintAlreadyExistedDataWithSpaceFile.txt");
            for(int i= 0; i<= fin.eof(); i++){
                getline(fin, str2);
            }
            cout<<str2;
            fin.close();

     getch(); c
    return 0;
    }

