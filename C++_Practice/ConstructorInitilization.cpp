/* Code a software to intitilization a constructor using different method and differnent type of passing (arguments) in C++ with RitikCoder. */
#include<iostream>
#include<conio.h>
using namespace std;

//Class's is here...
class ConsturctorInitilizationWithDifferentMethod{
        int a, b;
        string name;
    public:
        //Constructor initiliazation is here....
        ConsturctorInitilizationWithDifferentMethod(int x, int y, string name1): a(x+= 11), b(y+ 2 -2 *5), name(name1){//b(y), a(x)
            cout<<"\n\t\t\t\tThe name is = "<<name<<endl;
            cout<<"\t\t\t\tThe Value of A is = "<<a<<endl;
            cout<<"\t\t\t\tThe Value of B is = "<<b<<endl<<endl;
        }
}CIWDM(10, 20, "RitikCoder");//We can also pass arguments here and main function.
//Secon Class is here.....
class ConsturctorInitilizationWithDifferentMethod2{
        int a, b;
        string name;
        char arr[5];
    public:
        ConsturctorInitilizationWithDifferentMethod2(): a(12), b(24), name("RitikCoder2"), arr(){//We can also pass arguments here and main function.
            cout<<"\n\t\t\tThe name is = "<<name<<endl;
            cout<<"\t\t\tThe value of A is = "<<a<<endl;
            cout<<"\t\t\tThe value of B is = "<<b<<endl<<endl;
        }
}CIWDM2;

    int main(){
        system("color 02");
            
            /* **** Consturctor initilization in cpp with RitikCoder ****. */
            cout<<"\t\t\t Welcome to Cpp program with RitikCoder..."<<endl;
            // ConsturctorInitilizationWithDifferentMethod CIWDM(10, 20, "RitikCoder");//We can also pass arguments form here and also pass for ther object is created.
            //and we can also pass arguments by using variable and also initiliazation in constuructorn there is not a problem. to do this thing.
            //We can do that you will never face any error and any warning if your use this method. That's it about Constuctor initiliazation in CPP.

    //getch();
    return (0);
    }
