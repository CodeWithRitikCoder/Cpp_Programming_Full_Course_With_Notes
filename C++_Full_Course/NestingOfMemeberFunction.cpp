//Write a program to use Nesting of memeber function in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
#include"string"
using namespace std;

class Binary{
    private:
    string binaryNumber;
    void checkBinary(void);

    public: 
    void setNumber(void);
    void onceComplement(void);
    void display(void);
};

void Binary :: setNumber(void){
    cout<<"Enter a number here : ";
    cin>>binaryNumber;
}

void Binary :: checkBinary(void){
    for(int i= 0; i< binaryNumber.length(); i++){
        if(binaryNumber.at(i)!= '0' && binaryNumber.at(i)!= '1'){
            cout<<"Incorrect binary format."<<endl;
            exit(0);
        }
    }
}

void Binary :: onceComplement(void){
    //calling a function inside the function body that is called Nesting of a function. and it can be private.
    checkBinary();
    cout<<"Correct Binary format."<<endl;
    for(int i= 0; i< binaryNumber.length(); i++){
        if(binaryNumber.at(i)== '0'){
            binaryNumber.at(i)= '1';
        }else{
            binaryNumber.at(i)= '0';
        }
    }
}

void Binary :: display(void){
    cout<<"The Binary number is : ";
    for(int i= 0; i< binaryNumber.length(); i++){
        cout<<binaryNumber.at(i);
    }
    cout<<endl;
}

int main(){
    
//Notes.
    //What is Nesting of member function in C++ programmgin ?
    //->   

    Binary b1;

    b1.setNumber();
    //b1.checkBinary();
    b1.display(); 
    b1.onceComplement();
    b1.display();
    
    //getch();
    return(0);
}