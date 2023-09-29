/* Code a software to store char data in file without space using string. in C++. */
#include"iostream"
#include"conio.h"
#include"fstream"
using namespace std;

    int main(){
        system("color 02");
            
            /* **** ----------- ****. */
            cout<<"\t RitikCoder is Back."<<endl;
            //I use here file handling.
            //write char value in file.
            ofstream fout1;//create an object of store data in file.
            fout1.open("1CharDataWithoutSpaceFile.txt");//open file using open funciton
            string str;
            cout<<"Enter your string here without space. = ";
            cin>>str;
            fout1<<str;//store data in file.
            fout1.close();//close file function.

     getch();
    return 0;
    }

