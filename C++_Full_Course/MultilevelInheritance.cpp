//Write a program to use MultiLevel inheritance in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

class Student{
    int rollNo;

    public:
    void setRollNo(int);
    void getRollNo(void);

};

void Student::setRollNo(int a){
    rollNo= a;
}

void Student::getRollNo(void){
    cout<<"The Roll no is : "<<rollNo<<endl;
}

class Exam: public Student{
    protected:
    float maths, physics;

    public:
    void setMarks(float, float);
    void getMarks(void);
};

void Exam::setMarks(float a, float b){
    maths= a;
    physics= b;
}

void Exam::getMarks(){
    cout<<"The marks of maths is : "<<maths<<endl;
    cout<<"The marks of physics is : "<<physics<<endl;
}

class Result: public Exam{
    float percentage;
    public:
    void displayResult(){
        getRollNo();
        getMarks();
        cout<<"The percentages is : "<<(maths+ physics)/2<<endl;
    }
};

int main(){
    cout<<"Multilevel inheritanc in C++ programming\n";
    
    Result rohan;
    rohan.setRollNo(102);
    rohan.setMarks(95.5, 99.0);
    rohan.displayResult();
    
    //getch();
    return(0);
}