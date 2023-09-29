/* Code a softare to Addition of tow number using Class with function in C++. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class add{
    private:
        int a, b;
    public:
        int set_data(int x, int y){
            int z;
            a= x; b= y; z= a+ b;
            return(z);
        }
        void show_data(int z){
            cout<<endl<<endl<<z<<" = is the Addition of two number which is given by you.";
        }
};

    int main(){
        system("color 02");
            
            /* **** Add two numbers using Class with funciton ****. */
            cout<<endl<<"\tHello RitikCoder"<<endl<<endl;
        add obj_1;
        int n, o, p;
        cout<<"Enter the first number here = ";
        cin>>o;
        cout<<"Enter the second number her = ";
        cin>>p;
            n= obj_1.set_data(o, p);
            obj_1.show_data(n);

    getch();
    return 0;
    }

