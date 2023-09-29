/* Code a software to --------------------------------------- in C++. */
#include<iostream>
#include<conio.h>
using namespace std;
class student{
    private:
        string Name;
        int Age;
    public:
        void SetStudent(string s, int a){
            Name= s;
            Age= a;
        }
        void ShowData(){
            cout<<endl<<"Name = "<<Name;
            cout<<endl<<"Age = "<<Age;
        }
};

    int main(){
        system("color 02");
            
            /* **** ----------- ****. */
                //pair creation.
            pair<string, int> p1;
            pair<string, string> p2;
            pair<string, float> p3;
            pair<int, student> p4;

            //Assgin value in paires.
            p1=make_pair("RitikVerma", 17);
            p2=make_pair("India", "New Delhi");
            p3=make_pair("C++ Tutorail", 250.50f);
            student s1;//Create a Student class object;
            s1.SetStudent("RitikCoder", 18);
            p4=make_pair("1", s1);

            //Pair printing start form here.
            cout<<endl<<"Pair 1 is down bellow.";
            cout<<endl<<p1.first<<" "<<p1.second;
            cout<<endl<<"Pair 2 is down bellow.";
            cout<<endl<<p2.first<<" "<<p2.second;
            cout<<endl<<"Pair 3 is down bellow.";
            cout<<endl<<p3.first<<" "<<p3.second;
            cout<<endl<<"Pair 4 is down bellow.";
            cout<<endl<<p4.first;
            student s2= p4.second;
            s2.ShowData();

    
    return 0;
    }
