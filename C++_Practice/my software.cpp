/* Code a software to --------------------------------------- in C++. */
#include<iostream>
#include<conio.h>
#include"string.h"
#include"fstream"
#include"string"
using namespace std;

//This is my class section.
class StudentDataManagement{
    private:

        //Emoji parition.
        char Emoji_1= true;

        //Condition Select numbers variables.
        int SelectNumber1, SelectNumber2, SelectNumber3;

        int Student_ID;
        string Student_Name;
        int Student_Roll_NO;
        int Student_Class;
        string Student_Father_Name;
        string Student_Mother_Name;
        string Student_Address;
        long long int Student_Parents_Phone_No;

//Some public variables.    
// int CountStudentDataInFile= 0;


    public:
        //Defalut Constructure.
        StudentDataManagement(){
            Student_ID= 0;
            Student_Name= "No Student name";
            Student_Roll_NO = 0;
            Student_Class= 0;
            Student_Father_Name= "No Student Father's name";
            Student_Mother_Name= "No Student Mother's name";
            Student_Address= "No Student Address";
            Student_Parents_Phone_No= 0000000000;
        }

        //Function declaration or prototype.
        void getStudentDataFormUser();
        void displayStudentDataToUser();
        int storeStudentDataInToFile();
        void viewAllStudentData();
        void deleteStudentDataFromFile();
        void searchStudentDataFromFile();
        void updataStudentDataInToFile();
};


//This is my Stduent class function definition section.
void StudentDataManagement::getStudentDataFormUser(){
    cout<<endl<<"\t***********************************************"<<endl;
    cout<<"\t\t\t**************"<<endl;
    cout<<"\t\t\t| RitikCoder |"<<endl;
    cout<<"\t\t\t**************"<<endl;
    cout<<"\t***********************************************"<<endl;
    cout<<"**************************************************************"<<endl<<endl;
    StudentIDLevel:
    cout<<"\tEnter Student ID = ";
    cin>>Student_ID;
    if(Student_ID== 0){
        cout<<"ID is invalid please Enter valid id."<<endl;
        goto StudentIDLevel;
    }
    cout<<"\tEnter Student name = ";
    cin.ignore();
    getline(cin, Student_Name);
    StudentRollnoLevel:
    cout<<"\tEnter Student Roll_no = ";
    cin>>Student_Roll_NO;
    if(Student_Roll_NO== 0){
        cout<<"Roll_no is invalide please Enter valid Roll_no."<<endl;
        goto StudentRollnoLevel;
    }
    StudentClassLevel:
    cout<<"\tEnter Student Class = ";
    cin>>Student_Class;
    if(Student_Class== 0){
        cout<<"Class is invalid please Enter valid class."<<endl;
        goto StudentClassLevel;
    }
    cout<<"\tEnter Student Father's name = ";
    cin.ignore();
    getline(cin, Student_Father_Name);
    cout<<"\tEnter Student Mother's name = ";
    cin.ignore();
    getline(cin, Student_Mother_Name);
    cout<<"\tEnter Student Address = ";
    cin.ignore();
    getline(cin, Student_Address);
    StudentParentsPhoneNumberLevel:
    cout<<"\tEnter Student Parents Phone Number = ";
    cin>>Student_Parents_Phone_No;
    // if(Student_Parents_Phone_No <    || Student_Parents_Phone_No >)
    
    //other function invoke.
    StoreStudentDataInDataBaseLevel:
    cout<<endl<<"\tDo you want to store your data in DataBase. -- (Yes/NO).";
    string StoreStudentDataInDataBase;
    cin.ignore();
    getline(cin, StoreStudentDataInDataBase);
    if(StoreStudentDataInDataBase== "Yes" || StoreStudentDataInDataBase== "yes" || StoreStudentDataInDataBase== "Y" || StoreStudentDataInDataBase== "y"){
        //StoreStudentDataInTofile function invoke.
        storeStudentDataInToFile();
    }else if(StoreStudentDataInDataBase== "NO" || StoreStudentDataInDataBase== "no" || StoreStudentDataInDataBase== "N" || StoreStudentDataInDataBase== "n"){
        goto EndOfGetStudentDataFromUserFunctionLevel;
    }else{
        cout<<"Your Entered invalid value please Enter valid value."<<endl;
        goto StoreStudentDataInDataBaseLevel;
    }
    EndOfGetStudentDataFromUserFunctionLevel: 	
}
int StudentDataManagement::storeStudentDataInToFile(){
    if(Student_ID== 0 || Student_Roll_NO== 0 || Student_Class== 0){
        cout<<endl<<"\t\t"<<Emoji_1<<" "<<Emoji_1<<" Please Enter valid data in file. "<<Emoji_1<<" "<<Emoji_1<<endl<<endl;
        return(0);
    }else{
        ofstream SDMFileOut;
        SDMFileOut.open("StudentDataManagementFile.dat", ios::app|ios::binary);
        SDMFileOut.write((char *)this, sizeof(* this));
        SDMFileOut.close();
        
        cout<<"\tYour data is Saved permatently in file."<<endl;
                    return(1);
    }
}
void StudentDataManagement::viewAllStudentData(){
    ifstream SDMFileIn;
    SDMFileIn.open("StudentDataManagementFile.dat", ios::in | ios::binary);
    if(!SDMFileIn){
        cout<<endl<<"File is not found.";
    }else{
        SDMFileIn.read((char*)this, sizeof(*this));
        while(!SDMFileIn.eof()){
            // CountStudentDataInFile= CountStudentDataInFile++;
            displayStudentDataToUser();
            SDMFileIn.read((char*)this, sizeof(*this));
        }
        // cout<<"\t"<<CountStudentDataInFile<<" Student's data is stored in the file.";
        SDMFileIn.close();
    }
}
void StudentDataManagement::displayStudentDataToUser(){
    cout<<endl<<"\t***********************************************"<<endl;
    cout<<"\t\t\t**************"<<endl;
    cout<<"\t\t\t| RitikCoder |"<<endl;
    cout<<"\t\t\t**************"<<endl;
    cout<<"\t***********************************************"<<endl;
    cout<<"**************************************************************"<<endl<<endl;
    cout<<"\tThis is "<<Student_Name<<"'s information."<<endl<<endl;
    cout<<"\t"<<Student_Name<<"'s ID = "<<Student_ID<<endl;
    cout<<"\t"<<Student_Name<<"'s Roll_No = "<<Student_Roll_NO<<endl;
    cout<<"\t"<<Student_Name<<"'s Class = "<<Student_Class<<endl;
    cout<<"\t"<<Student_Name<<"'s Father's name = "<<Student_Father_Name<<endl;
    cout<<"\t"<<Student_Name<<"'s Mother's name = "<<Student_Mother_Name<<endl;
    cout<<"\t"<<Student_Name<<"'s Address = "<<Student_Address<<endl;
    cout<<"\t"<<Student_Name<<"'s Parent's Phone_NO = "<<Student_Parents_Phone_No<<endl;
}
void StudentDataManagement::searchStudentDataFromFile(){
    cout<<"Search student data from file .";
}
void StudentDataManagement::updataStudentDataInToFile(){
    cout<<"update Student data in to file .";
}
void StudentDataManagement::deleteStudentDataFromFile(){
    cout<<"Delete student data from file function .";
}


//StudentDataManagement Swich case Menu function definition.
int firstSwitchCaseMenu(){
    int choice;
    cout<<endl<<"\a\t***********************************************"<<endl;
    cout<<"\a\t\t\t**************"<<endl;
    cout<<"\t\t\t| RitikCoder |"<<endl;
    cout<<"\t\t\t**************"<<endl;
    cout<<"\t***********************************************"<<endl;
    cout<<"**************************************************************"<<endl<<endl;
    cout<<"\t1). Press One(1) to Add Student Record."<<endl;
    cout<<"\t2). Press Two(2) to View All Student Record."<<endl;
    cout<<"\t3). Press Three(3) to Search Student Record."<<endl;
    cout<<"\t4). Press Four(4) to Delete Student Record."<<endl;
    cout<<"\t5). Press Five(5) to Update Student Record."<<endl;
    cout<<"\t6). Press Six(6) to Exit form this software."<<endl;
    cout<<"\tEnter your choice here = ";
    cin>>choice;
    return(choice);
}

//Class Object creation here.
StudentDataManagement SDM;

int SelectNumber1, SelectNumber2, SelectNumber3;
    int main(){
        system("color 02");
            
            /* **** MyAllDataManagement ****. */
            SDMSwitchCaseLevel_1:
            switch(firstSwitchCaseMenu()){
                case 1:{
                    SDM.getStudentDataFormUser();
                    break;
                }
                case 2:{
                    SDM.viewAllStudentData();

                    case2end:
                    break;
                }
                case 3:{
                    SDM.searchStudentDataFromFile();

                    case3end:
                    break;
                }
                case 4:{
                    SDM.deleteStudentDataFromFile();

                    case4end:
                    break;
                }
                case 5:{
                    SDM.updataStudentDataInToFile();

                    case5end:
                    break;
                }
                case 6:{
                    cout<<"\tThanks a lot for using this Software."<<endl;
                    cout<<"\tPress any key to Exit from this software. to skip ctrl key only.";
                    getch();
                    exit(0);
                }
                default:{
                    cout<<"\t ** OH OH OH - - - - Invalid choice - - - - Please choice valid option."<<endl;
                }

                //Goto Back SDM Menu statements.
                cout<<"\tIf you want to use this menu again press(1) other wish press(0). = ";
                cin>>SelectNumber1;
                if(SelectNumber1== 1){
                    goto SDMSwitchCaseLevel_1;
                }else{
                    goto end;
                }
            }

            end:

    // getch();
    return (0);
    }
