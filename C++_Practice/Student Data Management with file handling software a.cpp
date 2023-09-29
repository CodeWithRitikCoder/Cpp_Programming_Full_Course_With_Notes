/* Code a software to File Handling in C++. */
#include<iostream>
#include<conio.h>
#include"string.h"
#include"fstream"
using namespace std;
class Student{
        char Name[100];
        int Class;
        int Roll_no;
        char FatherName[100];
    public:
        Student(){//constructor.
        strcpy(Name, "Student Name");
        Class= 0;
        Roll_no= 0;
        strcpy(FatherName, "Student Father Name");
        }
        void GetStudentData(){
            cout<<"\tEnter your Information here."<<endl;
            cout<<"Enter your Name here = ";
            cin.ignore();
            gets(Name);
            cout<<"Enter your Class here = ";
            cin>>Class;
            cout<<"Enter your Roll No here = ";
            cin>>Roll_no;
            cout<<"Enter your Father's Name here = ";
            cin.ignore();
            gets(FatherName);
            cout<<endl<<"This Student Record is inserted successfully.";
        }
        void ShowStudentData(){
            cout<<endl<<"\t This is all your Student details."<<endl;
            cout<<"This is your Name = "<<Name<<endl;
            cout<<"This is your Class = "<<Class<<endl;
            cout<<"This is your Roll No = "<<Roll_no<<endl;
            cout<<"This is your Father's Name = "<<FatherName<<endl;
            cout<<"That's it all about your information."<<endl;
        }
        int StoreStudentDataFile();
        int GetStudentDataFile();
        int ShowMenuOne();
        void SearchStudentData(char*);

};
int Student::StoreStudentDataFile(){
ofstream fout;
fout.open("StoreStudentDataFile.dat", ios::app | ios::binary);
if(!fout){
    cout<<"File is not Found.";
    return (0);
}else{
    fout.write((char*)this, sizeof(*this));
    fout.close();
    cout<<" And also Stored in File Successfully."<<endl;
    return (1);
}
}
int Student::GetStudentDataFile(){
    ifstream fin;
    fin.open("StoreStudentDataFile.dat", ios::in | ios::binary);
    if(!fin){
        cout<<"File is not Found.";
        return (0);
    }else{
        fin.read((char*)this, sizeof(*this));
        while(!fin.eof()){
            ShowStudentData();
            fin.read((char*)this, sizeof(*this));
        }
        fin.close();
        return (1);
    }
}
int Student::ShowMenuOne(){
    int choice;
    cout<<"\tStudent Data Management."<<endl;
    cout<<"Please select your choice what you want to do."<<endl;
    cout<<endl<<"\t 1. Press One(1) to Insert Student Record.";
    cout<<endl<<"\t 2. Press Two(2) to View all Student Record.";
    cout<<endl<<"\t 3. Press Three(3) to Search Student Record.";
    cout<<endl<<"\t 4. Press Four(4) to Delete Student Record.";
    cout<<endl<<"\t 5. Press Five(5) to Update Student Record.";
    cout<<endl<<"\t 6. Press Six(6) to Exit.";
    cout<<endl<<endl<<"Enter your choice here = ";
    cin>>choice;
    return (choice);
}
void Student::SearchStudentData(char *StudentDataSearch){
    int counter= 0;
    ifstream fin1;
    fin1.open("StoreStudentDataFile.dat", ios::in | ios::binary);
    if(!fin1){
        cout<<"File is not Found.";
    }else{
        fin1.read((char*)this, sizeof(*this));
        while(!fin1.eof()){
            if(!strcmp(StudentDataSearch, Name)){
                ShowStudentData();
                counter++;
            }
            fin1.read((char*)this, sizeof(*this));
        }
        if(counter== 0){
            cout<<endl<<"This Student Record is not Found.";
            fin1.close();
        }
    }
}
//another function.

Student StudentClass;//Student Class object.
    int main(){
        system("color 02");
            
            /* **** File handling. ****. */
            cout<<"\tStudentCoder is Back."<<endl;
            switch(StudentClass.ShowMenuOne()){
                case 1:{
                    StudentClass.GetStudentData();
                    StudentClass.StoreStudentDataFile();
                    break;
                }
                case 2:{
                    StudentClass.GetStudentDataFile();
                    break;
                }
                case 3:{
                    char StudentName[100];
                    cout<<"Enter the Student Name here to Search Deatails = ";
                    cin.ignore();
                    gets(StudentName);
                    StudentClass.SearchStudentData(StudentName);
                    break;
                }
                case 4:{
                    cout<<"Deletection is on Panding.";
                    break;
                }
                case 5:{
                    cout<<"Updatation is on Panding.";
                    break;
                }
                case 6:{
                    int StarReating;
                    cout<<"* Thanky a lot for using My Software."<<endl;
                    cout<<"\t # Please Enter here Star Reating in numbers for my Software. = ";
                    cin>>StarReating;
                    cout<<"\t # Press any key to Exit form the software."<<endl;
                    getch();
                    exit(0);
                }
                default:{
                    cout<<"Invalid choice.";
                }
            }

    // getch();
    return 0;
    }

