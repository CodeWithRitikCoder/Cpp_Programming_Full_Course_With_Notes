/* Code a software to Generate Some Privacy C++ Course Book Passwrod in C++. */
#include<iostream>
#include"conio.h"
#include"string"
using namespace std;

//Function declaration here.
int GetData(int);
int calculationOne(int);
int CalculationSecond(int, int, int);
void ShowPassword(int, int);

//Difinition of functions here.
int GetData(int BookNumber1){
    cout<<"Your are in C++ Course Book's Password Generator Tool."<<endl;
    return(BookNumber1);
    }
int CalculationOne(int BookNumber1){
    return(BookNumber1+ 10);    
    }
int CalculationSecond(int ReciveOne, int BookNumber1, int CourseNumber){
    int CalOne, CalSecond;
    CalOne= ReciveOne* BookNumber1;
    CalSecond= CalOne+ ReciveOne+ CourseNumber;
    return(CalSecond);
    }
void ShowPassword(int ReciveSecond, int BookNumber1){
    cout<<"Your Book "<<BookNumber1<<" Password is Down Below."<<endl;
    cout<<endl<<"\tC++RitikCoder"<<ReciveSecond<<endl<<endl;
    cout<<"Press any key to continue only skip [Ctrl] key."<<endl;
    getch();
    }

    int main(){
        system("color 02");
            
            /* **** To Get My C++ Courser Degital Book Password ****. */
            cout<<"\tRitikCoder"<<endl<<endl;

            //My switch case.
            MainMenu:
            int choice;
            cout<<"\t Please choice what do you want to do."<<endl;
            cout<<"1. Press One to know all about my all Courses."<<endl;
            cout<<"2. Press Two to Get my all Courses Book Security PIN."<<endl;
            cout<<"3. Press Three to Get Updated information."<<endl;
            cout<<"4. Press Four to know all about my Software."<<endl;
            cout<<"5. Press Five to Close My Software."<<endl;
            cout<<"\tEnter your Selected number here = ";
            cin>>choice;
            cout<<endl;
            switch(choice){
                case 1:{
                    SecondMenu:
                    int choice1;
                    cout<<"1. Press One to know all about my C Course."<<endl;
                    cout<<"2. Press Two to know all about my C++ Course."<<endl;
                    cout<<"3. Press Three to know all about my Java Course."<<endl;
                    cout<<"4. Press Four to know all about my Data structure Course."<<endl;
                    cout<<"5. Press Five to know all about my Python Course."<<endl;
                    cout<<"6. Press Six to know all about my HTML Course."<<endl;
                    cout<<"7. Press Seven to know all about my CSS Course."<<endl;
                    cout<<"8. Press Eight to know all about my Java script Course."<<endl;
                    cout<<"9. Press Nine to know all about my Microsoft Office Course."<<endl;
                    cout<<"10. Press Ten to know all about my Youtube Creator Course."<<endl;
                    cout<<"\tEnter your Selected number here = ";
                    cin>>choice1;
                    cout<<endl;
                    switch(choice1){
                        case 1:{
                            cout<<"My C programming course is Well full for you."<<endl;
                            cout<<"You should do my C Course if you want to be a software engineer."<<endl;
                            cout<<"and Show on - - - - - -."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto SecondMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        case 2:{
                            cout<<"My C++ programming course is Well full for you."<<endl;
                            cout<<"You should do my C++ Course if you want to be a software engineer."<<endl;
                            cout<<"and Show on - - - - - -."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto SecondMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        case 3:{
                            cout<<"My Java programming course is Well full for you."<<endl;
                            cout<<"You should do my Java Course if you want to be a software engineer."<<endl;
                            cout<<"and Show on - - - - - -."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto SecondMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        case 4:{
                            cout<<"My Data structure programming course is Well full for you."<<endl;
                            cout<<"You should do my Data structure Course if you want to be a software engineer."<<endl;
                            cout<<"and Show on - - - - - -."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto SecondMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        case 5:{
                            cout<<"My Python programming course is Well full for you."<<endl;
                            cout<<"You should do my Python Course if you want to be a software engineer."<<endl;
                            cout<<"and Show on - - - - - -."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto SecondMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        case 6:{
                            cout<<"My HTML programming course is Well full for you."<<endl;
                            cout<<"You should do my HTML Course if you want to be a Web Developer."<<endl;
                            cout<<"and Show on - - - - - -."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto SecondMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        case 7:{
                            cout<<"My CSS programming course is Well full for you."<<endl;
                            cout<<"You should do my CSS Course if you want to be a Web Developer and Show on. ."<<endl;
                            cout<<"and Show on - - - - - -."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto SecondMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        case 8:{
                            cout<<"My Java script programming course is Well full for you."<<endl;
                            cout<<"You should do my Java script Course if you want to be a Web Developer and show on. ."<<endl;
                            cout<<"and Show on - - - - - -."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto SecondMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        case 9:{
                            cout<<"My Microsoft Office course is Well full for you."<<endl;
                            cout<<"You should do my Microsoft Office Course if you want to be a Master in Office."<<endl;
                            cout<<"and Show on - - - - - -."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto SecondMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        case 10:{
                            cout<<"My Youtube Creator course is Well full for you."<<endl;
                            cout<<"You should do my Youtube Creator Course if you want to be a Youtbe creator."<<endl;
                            cout<<"and Show on - - - - - -."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto SecondMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        default:{
                            cout<<"OHHHH  --------  Invalid choice please choice corret option."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto SecondMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                        }
                    }
                    break;
                }
                case 2:{
                    ThirdMenu:
                    int choice2;
                    cout<<"1. Press One to Get my C Course Book Security PIN."<<endl;
                    cout<<"2. Press Two to Get my C++ Course Book Security PIN."<<endl;
                    cout<<"3. Press Three to Get my Java Course Book Security PIN."<<endl;
                    cout<<"4. Press Four to Get my Data structure Course Book Security PIN."<<endl;
                    cout<<"5. Press Five to Get my Python Course Book Security PIN."<<endl;
                    cout<<"6. Press Six to Get my HTML Course Book Security PIN."<<endl;
                    cout<<"7. Press Seven to Get my CSS Course Book Security PIN."<<endl;
                    cout<<"8. Press Eight to Get my Java script Course Book Security PIN."<<endl;
                    cout<<"9. Press Nine to Get my Microsoft Office Course Book Security PIN."<<endl;
                    cout<<"10. Press Ten to Get my Youtuve Course Book Security PIN."<<endl;
                    cout<<"\tEnter your Selected Number here = ";
                    cin>>choice2;
                    cout<<endl;
                    switch(choice2){
                        case 1:{
                            cout<<"My C Programming Course Book is Cooming Soon."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto ThirdMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        case 2:{
                            string str;
                            int BookNumber, CourseNumber;
                            cout<<"Enter C++ Book founder name here = ";
                            cin>>str;
                            cout<<"Enter Your C++ Course Number = ";
                            cin>>CourseNumber;
                            cout<<"Enter C++ Book Number here = ";
                            cin>>BookNumber;
                            if(str== "RitikCoder"  && CourseNumber== 1 && BookNumber<= 30){
                                int BookNumber1, ReciveOne, ReciveSecond;
                                //function calls.
                                BookNumber1= GetData(BookNumber);
                                ReciveOne= CalculationOne(BookNumber1);
                                ReciveSecond= CalculationSecond(ReciveOne, BookNumber1, CourseNumber);
                                ShowPassword(ReciveSecond, BookNumber1);
                                int a;
                                cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                                cout<<"\tEnter your Selected number here = ";
                                cin>>a;
                                cout<<endl;
                             if(a== 1){
                                    goto ThirdMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            }else{
                                cout<<"Something is invalid please check your Entery."<<endl<<endl;
                                int a;
                                cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                                cout<<"\tEnter your Selected number here = ";
                                cin>>a;
                                cout<<endl;
                             if(a== 1){
                                    goto ThirdMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            }
                            break;
                        }
                        case 3:{
                            cout<<"My Java Programming Course Book is Cooming Soon."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto ThirdMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        case 4:{
                            cout<<"My Data structure Programming Course Book is Cooming Soon."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto ThirdMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        case 5:{
                            cout<<"My Python Programming Course Book is Cooming Soon."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto ThirdMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        case 6:{
                            cout<<"My HTML Programming Course Book is Cooming Soon."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto ThirdMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        case 7:{
                            cout<<"My CSS Programming Course Book is Cooming Soon."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto ThirdMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        case 8:{
                            cout<<"My Java script Programming Course Book is Cooming Soon."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto ThirdMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        case 9:{
                            cout<<"My Microsoft Office Master Course Book is Cooming Soon."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto ThirdMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        case 10:{
                            cout<<"My Youtube Creator Course Book is Cooming Soon."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto ThirdMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                            break;
                        }
                        default:{
                            cout<<"OHHHH  --------  Invalid choice please choice corret option."<<endl;
                            int a;
                            cout<<"If you want to try again these menu than press one and if you want to goto main menu than press two other wise press 0."<<endl;
                            cout<<"\tEnter your Selected number here = ";
                            cin>>a;
                            cout<<endl;
                             if(a== 1){
                                    goto ThirdMenu;
                                }else if(a== 2){
                                    goto MainMenu;
                                }else{
                                break;
                                 }
                        }
                    }

                    break;
                }
                case 3:{
                    cout<<"There is no Updated information till the now about my Courses."<<endl;
                    int a;
                    cout<<"Do you want to try again than press one other wise press 0."<<endl;
                    cin>>a;
                    if(a== 1){
                        goto MainMenu;    
                    }else{
                        break;
                    }
                }
                case 4:{
                    cout<<"This Software name is [RCSF1]."<<endl;
                    cout<<"This Software Version is [RCSF1]- 1.1"<<endl;
                    cout<<"This software is Created by RitikCoder."<<endl;
                    cout<<"This is massively useful for you when you study with RitikCoder."<<endl;
                    int a;
                    cout<<"Do you want to try again than press one other wise press 0."<<endl;
                    cin>>a;
                    if(a== 1){
                        goto MainMenu;    
                    }else{
                        break;
                    }
                }
                case 5:{
                    char Region[100];
                    cout<<"Please Enter your Region Why do you want to Close my software = ";
                    cin>>Region;
                    cout<<endl<<"ThankYou For Submit Your Region."<<endl;
                    break;
                }
                default:{
                    cout<<"OHHHH  --------  Invalid choice please choice corret option."<<endl;
                    int a;
                    cout<<"Do you want to try again than press one other wise press 0."<<endl;
                    cin>>a;
                    if(a== 1){
                        goto MainMenu;    
                    }else{
                        goto LevelExit;
                    }
                }
            }

             
            

    LevelExit:
    return 0;
    }
