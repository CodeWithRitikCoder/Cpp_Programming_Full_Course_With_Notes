/* Code a software to Tokenizing a stirng uising " Stringstream " in C++. */
#include <bits/stdc++.h>//This header replace all header files.
using namespace std;
 
int main(){
    system("color 02");
     
    string line = "Code with RitikCoder on all Social media"; 
    vector <string> tokens;// Vector of string to save tokens
    stringstream check1(line);// stringstream class check1
    string intermediate;
    while(getline(check1, intermediate, ' '))// Tokenizing w.r.t. space ' '
    {
        tokens.push_back(intermediate);
    }
    for(int i = 0; i < tokens.size(); i++)// Printing the token vector
        cout << tokens[i] << '\n';

        return(0);
}

