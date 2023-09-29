//Code a software to "Handle My youtube Data and home management work and Tutuion Student data menagement" in C++.
#include"iostream"
#include"conio.h"
#include"string.h"
#include"string"
#include"list"
using namespace std;

//Here I create a Class.
class YoutubeDataManagement{
    public:
        void print(){
            cout<<"Yes, This is youtube dada management class";
        }
};
class CodingDataManagement{
    public:
        void print(){
            cout<<"Yes, This is Coding dada management class";
        }
};
class StudentDataManagement{
        char studentName[100];
        char standard[100];
        int age;
        int rollNumber;
        float height;
        double addharCardNumber;
        double phoneNumber;
        char fatherName[100];
        char motherName[100];
        char address[200];
    public:
        void print(){
            cout<<"Yes, This is Student dada management class";
        }
        StudentDataManagement(){ //Default Constructure.
            strcpy(studentName, "No Student");
            strcpy(standard, "No Standard");
            age= 0;
            rollNumber= 0;
            height= 0.0;
            addharCardNumber= 0;
            phoneNumber= 0;
            strcpy(fatherName, "No Father");
            strcpy(motherName, "No Mother");
            strcpy(address, "No Address");
        }
        //Here is defined some functions.
        // void takeStudentData(){
        //     cout<<endl<<"\t********** Enter Student Information. **********"<<endl<<endl;
        //     cout<<"\t\t1. Enter Student Name = ";
        //     gets(studentName);
        //     cout<<"\t\t2. Enter "<<studentName<<"'s Standard = ";
        //     gets(standard);
        //     cout<<"\t\t3. Enter "<<studentName<<"'s Age = ";
        //     cin>>age;
        //     cout<<"\t\t4. Enter "<<studentName<<"'s Roll_Number = ";
        //     cin>>rollNumber;
        //     cout<<"\t\t5. Enter "<<studentName<<"'s Height = ";
        //     cin>>height;
        //     cout<<"\t\t6. Enter "<<studentName<<"'s Addhar Card Number = ";
        //     cin>>addharCardNumber;
        //     cout<<"\t\t7. Enter "<<studentName<<"'s Phone Number = ";
        //     cin>>phoneNumber;
        //     cout<<"\t\t8. Enter "<<studentName<<"'s Father's Name = ";
        //     cin.ignore();
        //     gets(fatherName);
        //     cout<<"\t\t9. Enter "<<studentName<<"'s Mother's Name = ";
        //     gets(motherName);
        //     cout<<"\t\t10. Enter "<<studentName<<"'s Address = ";
        //     gets(address);
        // }
        // void showStudentData(){
        //     cout<<endl<<endl<<"\t********** This informaiton is "<<studentName<<"'s ***********"<<endl<<endl;
        //     cout<<"\t\t1. "<<studentName<<"'s Standard = "<<standard<<endl;
        //     cout<<"\t\t2. "<<studentName<<"'s Age = "<<age<<endl;
        //     cout<<"\t\t3. "<<studentName<<"'s Roll_Number = "<<rollNumber<<endl;
        //     cout<<"\t\t4. "<<studentName<<"'s Height = "<<height<<endl;
        //     cout<<"\t\t5. "<<studentName<<"'s Addhar_card_number = "<<addharCardNumber<<endl;
        //     cout<<"\t\t6. "<<studentName<<"'s Phone Number = "<<phoneNumber<<endl;
        //     cout<<"\t\t7. "<<studentName<<"'s Father's Name = "<<fatherName<<endl;
        //     cout<<"\t\t8. "<<studentName<<"'s Mother's Name = "<<motherName<<endl;
        //     cout<<"\t\t9. "<<studentName<<"'s Address = "<<address<<endl;
        //     cout<<"\t\t10 That's it all about "<<studentName<<"'s"<<endl;
        // }
};
class HomeDataManagement{
    public:
        void print(){
            cout<<"Yes, This is Home dada management class";
        }
};

// Object createion of classes.
YoutubeDataManagement ydm1; //First object of YoutubeDataManagement class.
CodingDataManagement cdm1; //First object of CodingDataManagement class.
StudentDataManagement sdm1; //First object of StudentDataManagement class.
HomeDataManagement hdm1; //First object of HomeDataManagement class.

int main(){
    system("color 02");
    cout<<endl<<endl<<"\t\t    *************************";
    cout<<endl<<"\t\t    *| RitikCoder is Back. |*"<<endl;
    cout<<"\t\t    *************************"<<endl<<endl;
    cout<<"***************************************************************************"<<endl;
    // sdm1.takeStudentData();
    // sdm1.showStudentData();

    //Here this is my first switch case options.
    int choose;
    cout<<endl<<"\t     ********** Please choose your option. **********"<<endl<<endl;
    cout<<"\t\t\ 1. Press One(1) to Youtube Data management."<<endl;
    cout<<"\t\t\ 2. Press Two(2) to Coding Data management."<<endl;
    cout<<"\t\t\ 3. Press Three(3) to Student Data management."<<endl;
    cout<<"\t\t\ 4. Press Four(4) to Home Data management."<<endl;
    cout<<"\t\t\ 5. Press Five(5) to Know all about this Software."<<endl;
    cout<<"\t\t\ 6. Press Six(6) to Know all about Software creator."<<endl;
    cout<<endl<<"\t\t***** Enter your choosed Number here = ";      cin>>choose;
    // Start My first switch case form here.
    switch(choose){
        case 1:{
            ydm1.print();
            break;
        }
        case 2:{
            cdm1.print();
            break;
        }
        case 3:{
            sdm1.print();
            break;
        }
        case 4:{
            hdm1.print();
        }


    }


    return(0);
}
