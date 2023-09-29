//Write a program to implement Map in STL in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
#include"map"
using namespace std;
int main(){
    cout<<"Map in STL in C++ programming\n"<<endl;
    
/*
Notes:
    Map is an associative array.
    it is used to store elements as the key and value pair.

*/
    
    //Creationg of map
    map<string, int> marksMap;
    //first way to Initialization/add elements into the map.
    marksMap["Ritik"]= 99;
    marksMap["Chomchardi"]= 60;
    marksMap["Vikas"]= 40;
    marksMap["Vishu"]= 40;
    //second way to Initialization/add elements into the map.
    marksMap.insert({{"Rohan", 55}, {"Sumit", 88}, {"Lovely", 98}});

    //printing the elements fo maps.
    map<string, int>::iterator itr;
    for(itr= marksMap.begin(); itr!= marksMap.end(); itr++){
        cout<<"["<<(*itr).first<<", "<<(*itr).second<<"]"<<endl;
    }

    //printing the size of filled marksMap.
    cout<<"The size of marksMap is : "<<marksMap.size()<<endl;
    //printing the marksMap is empty of not.
    cout<<"Empty's return value of marksMap is : "<<marksMap.empty()<<endl;
    //printing the Max size of marksMap.
    cout<<"The max size of marksMap is : "<<marksMap.max_size()<<endl;

    //getch();
    return(0);
}