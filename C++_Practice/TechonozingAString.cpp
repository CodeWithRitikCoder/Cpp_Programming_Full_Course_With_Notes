/* Code a software to input a String with space and Print that with sapce using "Structure" in C++. */
#include"conio.h"
#include "iostream"
using namespace std;
/* this is my structure here. */
struct Structure{
    char Name[50];
};
struct Structure s1; // globally declaration of structure name & structure variable name.

int main(){
    cout<<"Enter your name here with space is = ";
    // getline(s1.Name);
    gets(&s1.Name[0]);
    cout<<"This is your name with space is = "<<s1.Name<<endl;

    getchar();
    return (0);
}