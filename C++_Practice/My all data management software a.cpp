/* Code a software to --------------------------------------- in C++. */
#include<iostream>
#include<conio.h>
#include"string.h"
#include"fstream"
using namespace std;

//This is my class section.
class StudentDataManagement{
    private:
        int Student_ID;
        char Student_Name[50];
        int Student_Roll_NO;
        int Student_Class;
        char Student_Father_Name[100];
        char Student_Mother_Name[100];
        char Student_Address[100];
        long long int Student_Parents_Phone_No;

//Some public variables.
//int CountStudentDataInFile= 0;


    public:
        //Defalut Constructure.
        StudentDataManagement(){
            Student_ID= 0;
            strcpy(Student_Name, "No Student name");
            Student_Roll_NO = 0;
            Student_Class= 0;
            strcpy(Student_Father_Name, "No Father name");
            strcpy(Student_Mother_Name, "No Mother name");
            strcpy(Student_Address, "No Address");
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
    cout<<"\tEnter Student ID = ";
    cin>>Student_ID;
    cout<<"\tEnter Student name = ";
    cin.ignore();
    cin.getline(Student_Name, 50);
    cout<<"\tEnter Student Roll_no = ";
    cin>>Student_Roll_NO;
    cout<<"\tEnter Student Class = ";
    cin>>Student_Class;
    cout<<"\tEnter Student Father's name = ";
    cin.ignore();
    cin.getline(Student_Father_Name, 100);
    cout<<"\tEnter Student Mother's name = ";
    cin.ignore();
    cin.getline(Student_Mother_Name, 100);
    cout<<"\tEnter Student Address = ";
    cin.ignore();
    cin.getline(Student_Address, 100);
    cout<<"\tEnter Student Parents Phone Number = ";
    cin>>Student_Parents_Phone_No;
}
void StudentDataManagement::displayStudentDataToUser(){
    cout<<endl<<"\t***********************************************"<<endl;
    cout<<"\t\t\t**************"<<endl;
    cout<<"\t\t\t| RitikCoder |"<<endl;
    cout<<"\t\t\t**************"<<endl;
    cout<<"\t***********************************************"<<endl;
    cout<<"**************************************************************"<<endl<<endl;
    cout<<"\tThis is "<<Student_Name<<"'s information."<<endl<<endl;
    cout<<"\t"<<Student_Name<<"'s Roll_No = "<<Student_Roll_NO<<endl;
    cout<<"\t"<<Student_Name<<"'s Class = "<<Student_Class<<endl;
    cout<<"\t"<<Student_Name<<"'s Father's name = "<<Student_Father_Name<<endl;
    cout<<"\t"<<Student_Name<<"'s Mother's name = "<<Student_Mother_Name<<endl;
    cout<<"\t"<<Student_Name<<"'s Address = "<<Student_Address<<endl;
    cout<<"\t"<<Student_Name<<"'s Parent's Phone_NO = "<<Student_Parents_Phone_No<<endl;
}
int StudentDataManagement::storeStudentDataInToFile(){
    if(Student_ID== 0 && Student_Roll_NO== 0){
        cout<<"\t ** Your data is in valid."<<endl<<"\t ** Please Enter valid data in file.";
        return(0);
    }else{
        ofstream SDMFileOut;
        SDMFileOut.open("StudentDataManagementFile.dat", ios::app | ios::binary);
        SDMFileOut.write((char*) this, sizeof(*this));
        SDMFileOut.close();
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
//             CountStudentDataInFile= CountStudentDataInFile++;
            displayStudentDataToUser();
            SDMFileIn.read((char*)this, sizeof(*this));
        }
//         cout<<"\t"<<CountStudentDataInFile<<" Student's data is stored in the file.";
        SDMFileIn.close();
    }
}
void StudentDataManagement::deleteStudentDataFromFile(){
    cout<<"Delete student data from file function .";
}
void StudentDataManagement::searchStudentDataFromFile(){
    cout<<"Search student data from file .";
}
void StudentDataManagement::updataStudentDataInToFile(){
    cout<<"update Student data in to file .";
}


//StudentDataManagement Swich case Menu function definition.
int firstSwitchCaseMenu(){
    int choice;
    cout<<endl<<"\t***********************************************"<<endl;
    cout<<"\t\t\t**************"<<endl;
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



    int main(){
        system("color 02");
        int SelectNumber1, SelectNumber2, SelectNumber3;
            
            /* **** MyAllDataManagement ****. */
            SwitchCaseLevel_1:
            switch(firstSwitchCaseMenu()){
                case 1:{
                    SDM.getStudentDataFormUser();
                    cout<<"\tDo you want to save your data permanently in file than press(1) otherwise press(0)."<<endl;
                    cout<<"\tEnter your selected number here = ";
                    cin>>SelectNumber1;
                    if(SelectNumber1== 1){
                        SDM.storeStudentDataInToFile();
                        cout<<"\tYour data is Saved permatently in file.";
                    }else{
                        goto case1endl;
                    }
                    case1endl:
                    break;
                }
                case 2:{
                    SDM.viewAllStudentData();
                    break;
                }
                case 3:{
                    SDM.searchStudentDataFromFile();
                    break;
                }
                case 4:{
                    SDM.deleteStudentDataFromFile();
                    break;
                }
                case 5:{
                    SDM.updataStudentDataInToFile();
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
                cout<<"\tIf you want to use this menu again press(1) other wish press(0). = ";
                cin>>SelectNumber1;
                if(SelectNumber1== 1){
                    goto SwitchCaseLevel_1;
                }else{
                    goto end;
                }
            }

            end:

    // getch();
    return 0;
    }
