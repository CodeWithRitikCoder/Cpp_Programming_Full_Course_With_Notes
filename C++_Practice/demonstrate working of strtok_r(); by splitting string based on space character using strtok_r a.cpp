/* Code a software to demonstrate working of strtok_r(); by splitting
string based on space character using " strtok_r(); " in C++. */
#include"iostream"
#include"string.h"
using namespace std;

int main(){
    system("color 02");
     
    char str[] = "Code with RitikCoder on all social media";
    char *token;
    char *rest = str;
 
    while((token = strtok_r(rest, " ", &rest))){
         cout<<token<<endl;
        }

    return(0);
 }
