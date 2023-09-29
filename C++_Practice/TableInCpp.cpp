#include"iostream"
#include"conio.h"
using namespace std;
//Classess is here..
class Table{
    private:
    int n;
    public:
    void PrintTable(int );//function prototype.
}Tab;
void Table::PrintTable(int a){//Function defintion.
    int i= 1;
    while(i<= 10){
        cout<<a<<" * "<<i<<" = "<<a* i<<endl;
        i++; 
    }
}

//Main function is here..
int main(){
    char b= true;
    int n;
    cout<<"Enter your number here to findout table of (N) no = ";
    cin>>n;
    Tab.PrintTable(n);//function invoked by value with actual arguments.
    cout<<"This is Table of "<<n<<" Number."<<endl;
    cout<<b<<"  "<<b<<"  "<<b<<"  "<<b<<"  "<<b<<"  "<<b<<"  "<<b<<"  "<<endl;

    return(0);
}