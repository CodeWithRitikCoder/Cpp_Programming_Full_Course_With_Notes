/* Code a software to Splitting a string uising " strtok(); " in C++. */
#include"iostream"
#include"string.h"
using namespace std;

int main(){
    system("color 02");
     
    char gfg[100] = " Code - with - RitikCoder";// Declaration of string
 
    const char s[4] = "-";// Declaration of delimiter
    char* tok;
 
    // Use of strtok
    // get first token
    tok = strtok(gfg, s);

    while (tok != 0){// Checks for delimiter
        printf(" %s\n", tok);
 
        // Use of strtok
        // go through other tokens
        tok = strtok(0, s);
    }

    return(0);
 }
