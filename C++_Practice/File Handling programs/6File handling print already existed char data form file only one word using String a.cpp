/* Code a software to file handling this program is used to print already existed char data from file only one word usig String in C++. */
#include"iostream"
#include"conio.h"
#include"fstream"
using namespace std;

    int main(){
        system("color 02");
            
            /* **** File handling. ****. */
            cout<<"\t RitikCoder is Back."<<endl;

            ofstream fout ("6PrintAlreadyExistedDataOnlyOneWordFile.txt");
            string str1= "This program is used to print already existed char data from file only one word using String.";
            fout<<str1;
            fout.close();

            ifstream fin;
            string str2;
            fin.open("6PrintAlreadyExistedDataOnlyOneWordFile.txt");
            fin>>str2;
            cout<<str2;
            fin.close();

     getch();
    return 0;
    }

