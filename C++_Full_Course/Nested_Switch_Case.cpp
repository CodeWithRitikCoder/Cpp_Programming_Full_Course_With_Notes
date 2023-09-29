//Write a program to use Nested Switch case in C++ Programming with RitikCoder.
#include"iostream"
#include"conio.h"
using namespace std;
int main(){

    //Ask from the user to select the what item do you want to buy (Car or Bike).

    cout<<"1. Press 1 to buy a Bike."<<endl;    
    cout<<"2. Press  2 to buy a Car."<<endl<<endl;
    cout<<"Enter your selected number here : ";  
    int a= 0;
    cin>>a;

    switch(a){
        case 1: {
            cout<<"1. Brand Honda."<<endl;
            cout<<"2. Brand BMW."<<endl;
            cout<<"3. Brand Kawasaki Ninja."<<endl;
            cout<<"4. Brand Bajaj."<<endl;
            cout<<"Enter your selected Number : ";
            cin>>a;

            switch(a){
                case 1: {
                    cout<<"You got selected HOnda.";
                    break;
                }
                case 2: {
                    cout<<"Your got selected BMW.";
                    break;
                }
                case 3: {
                    cout<<"You got selected Kawasaki Ninja.";
                    break;
                }
                case 4: {
                    cout<<"Your got selected Bajaj.";
                    break;
                }
                default : {
                    cout<<"Invalid Selection.";
                }
            }
            break;
        }
        case 2: {
            cout<<"1. Brand Mehindra."<<endl;
            cout<<"2. Brand BMW."<<endl;
            cout<<"3. Brand Forchuner."<<endl;
            cout<<"4. Brand Rolls Royce."<<endl;
            cout<<"5. Brand Land Rover."<<endl;
            cout<<"6. Brand Range Rover."<<endl;
            cout<<"Enter your selected Number : ";
            cin>>a;

            switch(a){
                case 1: {
                    cout<<"You got selected Mehindra.";
                    break;
                }
                case 2:{
                    cout<<"you got selected BMW.";
                    break;
                }
                case 3:{
                    cout<<"You got selected Forchuner.";
                    break;
                }
                case 4: {
                    cout<<"You got selected Rolls Royce.";
                    break;
                }
                case 5: {
                    cout<<"You got selected Land Rover.";
                    break;
                }
                case 6: {
                    cout<<"You got selected Range Rover.";
                    break;
                }
                default : {
                    cout<<"Invalid selection.";
                }
            }

            break;
        }
        default : {
            cout<<"Invalid selection";
        }
    }


    //getch();
    return(0);
}