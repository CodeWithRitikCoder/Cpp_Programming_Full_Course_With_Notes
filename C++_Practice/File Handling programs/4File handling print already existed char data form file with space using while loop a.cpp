/* Code a software to file handling this program is used to print already existed char data from file with space usig while loop in C++. */
#include"iostream"
#include"conio.h"
#include"fstream"
using namespace std;

    int main(){
        system("color 02");
            
            /* **** File handling. ****. */
            cout<<"\t RitikCoder is Back."<<endl;

            ofstream fout ("4PrintAlreadyExistedDataWithSpaceFile.txt");
            string str1= "This program is used to print already existed char data from file with space using while loop.";
            fout<<str1;
            fout.close();

            ifstream fin;
            fin.open("4PrintAlreadyExistedDataWithSpaceFile.txt");
            string str2;
            while(!fin.eof()){
                getline(fin, str2);
                cout<<str2;
            }
            fin.close();

     getch();
    return 0;
    }

