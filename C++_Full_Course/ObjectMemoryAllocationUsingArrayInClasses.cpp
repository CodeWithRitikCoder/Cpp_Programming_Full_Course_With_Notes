//Write a program to object memory allocation using Array in the classes in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

class Shop{

//Notes.
    //Here this is object memory allocation using Array inside the class.

    int itemID[100];
    int itemPrice[100];
    int count;

    public:
    void initializer(void){
        count= 0;
    }
    void setData(void);
    void showData(void);

};

void Shop :: setData(void){
    cout<<"Enter the id of item : ";
    cin>>itemID[count];
    cout<<"Enter the price of item : ";
    cin>>itemPrice[count];
    count++;
}

void Shop :: showData(void){
    cout<<endl;
    for(int i= 0; i< count; i++){
        cout<<"The item price is : "<<itemPrice[i]<<" at item id is : "<<itemID[i]<<endl;
    }
}

using namespace std;
int main(){

    cout<<"Object memory allocation using array in Classes in C++ programming.\n";
    
    Shop dukan1;
    dukan1.initializer();
    dukan1.setData();
    dukan1.setData();
    dukan1.setData();
    dukan1.setData();
    dukan1.setData();
    dukan1.showData();
    
    //getch();
    return(0);
}