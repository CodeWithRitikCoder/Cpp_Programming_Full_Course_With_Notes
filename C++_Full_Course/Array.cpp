//Write a program to use Array in C++ Programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;
int main(){

//Note.
    //What is Array in C++ Programming in C++ Programming ?
    //-> Array is a collection of similiar type of data items in C++ Programmming.
    //-> Array is known as subscript variabl in C++ Programming.
    //-> Array is a group of variable.

//Array Points.
    //-> [] It is known as Square bracket.
    //-> Items are stored at continous memory locations in the array.
    //-> It can also stored the collection of derived data types. such as pointer, structure and etc.

//Array dimensional.
    //-> One-deimensional array. -> It is like a list.
    //-> Two-deimensional array. -> It is like a table.
    //-> Array indexing starts from (0).
    //-> If nothing is in the array then by default stored garbage value in the block of an array.
    //-> A little bit drawback of array is : Array never check it's boundry.

    int arr[5]= {2, 4, 5, 18, 12};

    cout<<"The value at index arr[0] is : "<<arr[0]<<endl;
    cout<<"The size of integer array is : "<<sizeof(arr)<<endl;
    cout<<"The size of integer array arr[0] is : "<<sizeof(arr[0])<<endl;
    cout<<"The address of array arr[0] is : "<<&arr[0]<<endl;
    int *ptr= arr;
    cout<<"The base address of array arr is : "<<ptr<<endl;
    cout<<"The value at array arr[0] is using pointer : "<<*ptr<<endl;
    cout<<"The value at array arr[1] is using pointer : "<<*(ptr+ 1)<<endl;

    cout<<endl<<"Values of array using for loop using arr[indexing]."<<endl;
    for(int i= 0; i<= 4; i++){
        cout<<"The value of array at arr["<<i<<"] is : "<<arr[i]<<endl;
    }

    cout<<endl<<"Values of array using for loop using pointer arithmetic."<<endl;
    for(int j= 0; j<= 4; j++){
        cout<<"The value of array at arr["<<j<<"] is : "<<*(ptr+ j)<<endl;
    }

    cout<<endl<<"Values of array using pointer dereferencing of pointer."<<endl;
    cout<<"The value of arr[0] is using pointer dereferencing : "<<*ptr++<<endl;
    cout<<"The value of arr[1] is using pointer dereferencing : "<<*ptr++<<endl;
    cout<<"The value of arr[2] is using pointer dereferencing : "<<*ptr++<<endl;
    cout<<"The value of arr[3] is using pointer dereferencing : "<<*ptr++<<endl;
    cout<<"The value of arr[4] is using pointer dereferencing : "<<*ptr<<endl;

    
    //getch();
    return(0);
}