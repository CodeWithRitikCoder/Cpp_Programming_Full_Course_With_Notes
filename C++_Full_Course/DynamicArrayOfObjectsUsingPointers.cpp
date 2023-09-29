//Write a program to Create Dynamic array of objects using pointer in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

// Classes code is here.
class Shop{
    int itemID;
    float itemPrice;

    public:
    void setData(int a, float b){
        itemID= a;
        itemPrice= b;
    }

    void getData(void){
        cout<<"Id of this item is : "<<itemID<<endl;
        cout<<"Price of this item is : "<<itemPrice<<endl<<endl;
    }
};

int main(){
    cout<<"Dynamic Array of objecs using pointer in C++ programming\n"<<endl;
    
    Shop *ptr= new Shop[3]; //Here I have created 3 objects of this Shop class dynamically.
    Shop *ptrTemp= ptr;
    ptr->setData(101, 50.5);
    ptr->getData();
    (ptr+ 1)->setData(102, 100.1);
    (ptr+ 1)->getData();

    int a, i;
    float b;

    //This loop is used to setData using ptr pointer variable.
    for(int i= 0; i< 3; i++){
        cout<<"Enter Id of item "<<i+ 1<<" : ";
        cin>>a;
        cout<<"Enter Price of item "<<i+ 1<<" : ";
        cin>>b;
        
        ptr->setData(a, b);
        ptr++;
    }
    cout<<endl;

    //This loop is used to getData using ptrTemp pointer variable.
    for(int i= 0; i< 3; i++){
        ptrTemp->getData();
        ptrTemp++;
    }
    
    //getch();
    return(0);
}