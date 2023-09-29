/* Code a software to file handling this program is used to print already existed char data from file without space usig while loop in C++. */
#include"iostream"
#include"conio.h"
#include"fstream"
using namespace std;

    int main(){
        system("color 02");
            
            /* **** File handling. ****. */
            cout<<"\t RitikCoder is Back."<<endl;

            ofstream fout ("3PrintAlreadyExistedDataWithoutSpaceFile.txt");
            string str1= "This program is used to print already existed char data from file without space using while loop.";
            fout<<str1;
            fout.close();

            ifstream fin;
            fin.open("3PrintAlreadyExistedDataWithoutSpaceFile.txt");
            string str2;
            while(!fin.eof()){
                fin>>str2;
                cout<<str2;
            }
            fin.close();

     getch();
    return 0;
    }

