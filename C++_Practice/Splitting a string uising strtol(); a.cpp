/* Code a software to Splitting a string uising " strtok(); " in C++. */
#include"iostream"
#include"string.h"
using namespace std;

int main(){
    system("color 02");
     
    char str[] = "Code-with-RitikCoder-on-all-social-media";
    char *token = strtok(str, "-");// Returns first token
 
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL){
        printf("%s\n", token);
        token = strtok(NULL, "-");
    }

    return(0);
 }
