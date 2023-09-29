/* Code a software to print table of some number using "static keyword with function" in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void table(int);//fun declaration here .

    int main(){
        system("color 02");

        /* **** Use of "Static keyword with function" ****. */
      int b;
      cout<<"Enter the number you want to get table = "; cin>>b;
      table(b);//function call by actual parameter.
      table(b);//function call by actual parameter.
      table(b);//function call by actual parameter.
      table(b);//function call by actual parameter.
      table(b);//function call by actual parameter.
      table(b);//function call by actual parameter.
      table(b);//function call by actual parameter.
      table(b);//function call by actual parameter.
      table(b);//function call by actual parameter.
      table(b);//function call by actual parameter.

    getch();
    return 0;
    }
  void table(int b){
    static int a;
    a++;
    cout<<b<<" * "<<a<<" = "<<a* b<<endl;
  }
