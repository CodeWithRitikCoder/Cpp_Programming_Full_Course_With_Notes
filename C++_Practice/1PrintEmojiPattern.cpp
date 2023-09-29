#include"iostream"
#include"conio.h"
using namespace std;
int main(){
	system("color 02");
	
	//Print Emoji pattern.
	 int a;
            cout<<"Enter you pryamid number = ";
            cin>>a;
            for(int i= 1; i<= a; i++){
                for(int j= 1; j<= i; j++){
                    // cout<<b<<" ";
                    printf("%c ", i);
                }
                cout<<endl;
            }
}
