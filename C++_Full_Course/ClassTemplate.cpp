//Write a program to Class template in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

//Classes code is here.
template <class G>
class MyClass{
    int size;

    public:
    G *arr;
    MyClass(int size){
        this->size= size;
        arr= new G[size];
    }

    G display(){
        int addition= 0;
        for(int i= 0; i< size; i++){
            addition+= arr[i];
        }
        return (addition);
    }
};

int main(){
    cout<<"Class template in C++ programming\n"<<endl;
    
    MyClass <int>mC(3);
    mC.arr[0]= 5;
    mC.arr[1]= 15;
    mC.arr[2]= 10;

    // cout<<"The value of arr[0] is : "<<mC.arr[0]<<endl;
    // cout<<"The value of arr[1] is : "<<mC.arr[1]<<endl;
    // cout<<"The value of arr[2] is : "<<mC.arr[2]<<endl;

    // for(int i= 0; i< 3; i++){
    //         cout<<"The value of arr["<<i<<"] is : "<<mC.arr[i]<<endl;
    //     }

    cout<<"This addition of arr blocks is : "<<mC.display();
    
    //getch();
    return(0);
}