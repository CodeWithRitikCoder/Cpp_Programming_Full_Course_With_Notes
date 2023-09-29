//Write a program to Revisiting pointers with new and delete keyword for Dynamic memory allocation in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Classes code is here.


int main(){
    cout<<"New and Delete keyword for dynamic memory allocation using pointer in C++ programming\n";

    // Basic example of pointer.
    int a= 5;
    int *ptr= &a;
    cout<<"The value of a is : "<<*(ptr)<<endl;
    cout<<"The address of a is : "<<(ptr)<<endl;

    // New keyword to create dynamic memory allocation.
    // and new keyword is used to cereate dynamic memory allocation.
    int *p= new int(10);
    // float *p= new float(10); // we can also create float type of array. and so on....
    cout<<"The address is stored in p is : "<<(p)<<endl;
    cout<<"The value at *p is : "<<*(p)<<endl;

    //Creation of Dynamic memory blocks using new keyword. it menas dynamic array.
    int *arr= new int[3];
    arr[0]= 10;
    // *(arr)= 10; // This is as same intialization method as upper one.
    arr[1]= 20;
    // *(arr+ 1)= 20; // This is as same intialization method as upper one.
    arr[2]= 30;
    // *(arr+ 2)= 30; // This is as same intialization method as upper one.
    cout<<"The value at arr[0] is : "<<*(arr)<<endl;
    cout<<"The value at arr[1] is : "<<*(arr+ 1)<<endl;
    cout<<"The value at arr[2] is : "<<*(arr+ 2)<<endl;

    // delete keyword is used to delete dynamic created memory.
    delete arr; // This syntex is used to deleted single dynamic memory block.
    delete[] arr; // This syntex is used to deleted contigous dynamic memory blocks.

    //This will print garvage values because of I have deleted this dynamic memory using delete keyword.
    cout<<endl<<"The value at arr[0] is : "<<*(arr)<<endl;
    cout<<"The value at arr[1] is : "<<*(arr+ 1)<<endl;
    cout<<"The value at arr[2] is : "<<*(arr+ 2)<<endl;
    
    //getch();
    return(0);
}