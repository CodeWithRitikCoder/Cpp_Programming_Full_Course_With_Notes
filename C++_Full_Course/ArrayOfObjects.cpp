//Write a program to create array of Objects in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
using namespace std;

static int EmployeeeCounter;
class Employee {
    int empId, empSalary;

    public:
    void setEmployeeData(void);
    void getEmployeeData(void);
};

void Employee :: setEmployeeData(void){
    cout<<"Enter employee id here : ";
    cin>>empId;
    empSalary= 50000;
}

void Employee :: getEmployeeData(void){
    cout<<"The Employee id is : "<<empId<<" and Salary is : "<<empSalary<<endl<<endl;
}

using namespace std;
int main(){

    cout<<"Create array of objects in C++ programming.\n";

//Notes.
    //Array of Objects is array of particular class's object.
    //It means we will create a array of type a class object.
    //and we can access that array by using array indexing as well as loops.

    Employee emp[5];

//By skiping this indixing long method we can use loops here for array of object indexing.
    // emp[0].setEmployeeData();
    // emp[0].getEmployeeData();

    // emp[2].setEmployeeData();
    // emp[2].getEmployeeData();

    for(int i= 0; i< 5; i++){
        emp[i].setEmployeeData();
        emp[i].getEmployeeData();
        EmployeeeCounter++;
    }

    cout<<"Totoal employees are : "<<EmployeeeCounter;

    //getch();
    return(0);
}