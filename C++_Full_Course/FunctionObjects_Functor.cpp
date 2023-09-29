//Write a program to know all about function object or functors in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
#include"functional"
#include"algorithm"
using namespace std;
int main(){
    cout<<"Function objects or Functors in for C++ programming\n";
    
/*
Notes:
    What is Function object in C++ programming.
    -> Function objects or Functors: function wrapped in a class so that it is available like an object.
*/

    int arr[]= {4, 2, 7, 3, 1, 6};

    //printing the elements of the array.
    cout<<"Printing the elements of the array : ";
    for(int i= 0; i< 6; i++){
        cout<<arr[i]<<" ";
    }

    //Sorting the elements of the array in acending order by default.
    sort(arr, arr+6);
    cout<<endl<<"Printing the elements of the array after sorting in acending order : ";
    for(int i= 0; i< 6; i++){
        cout<<arr[i]<<" ";
    }

    //Sorting the elements of the array.
    sort(arr, arr+6, greater<int>()); //here greater<int>() -> this is a function object.
    cout<<endl<<"Printing the elements of the array after sorting in decending order : ";
    for(int i= 0; i< 6; i++){
        cout<<arr[i]<<" ";
    }

    //getch();
    return(0);
}