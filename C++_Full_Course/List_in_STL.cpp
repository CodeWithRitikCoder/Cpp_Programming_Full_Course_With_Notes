//Write a program to implement List in STL in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
#include"list"
using namespace std;

void display(list<int> &l1){
    list<int> :: iterator it;
    for(it= l1.begin(); it!= l1.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    cout<<"List in STL in C++ programming\n"<<endl;

/*
Notes:
    // list is a container and it is used to store the data.
    // list is a bydirectionaly linear list inserction and delection is ifficient
*/

    list<int> list1; //Empty list of 0 length.
    //initialization of a list items using push_back() function of the list.
    list1.push_back(5);    
    list1.push_back(3);  
    list1.push_back(2);    
    list1.push_back(9);

    //first way to print items of list.
    list<int> :: iterator iter;
    iter= list1.begin();
    cout<<"Displaying the elements using iterctor directly : ";
    cout<<*iter<<" ";
    cout<<*++iter<<" ";
    cout<<*++iter<<" ";
    cout<<*++iter<<endl;
    //second way to print items of list using function.
    cout<<"Displaying the elements using function : ";
    display(list1);

//removing the list elements.

    //removing elements from the list1 from the end of the list1.
    list1.pop_back();
    cout<<"Displaying elements after pop_back() : ";
    display(list1);

    //removing elements from the list1 from the first of the list1.
    list1.pop_front();
    cout<<"Displaying elements after pop_back() : ";
    display(list1);

    //removing spcified element from the list.
    list1.remove(3);
    cout<<"Displaying elements after remove(3) : ";
    display(list1);

    //Creation of list2.
    list<int> list2(3); //Empty list of size-7.
    //initialization of a list elements using iterator.
    list<int> ::iterator iter1;
    iter1= list2.begin();
    *iter1= 20;
    iter1++;
    *iter1= 10;
    iter1++;
    *iter1= 40;
    cout<<"Displaying elements of list2 : ";
    display(list2);

    //Sorting of the list.
    list<int> list3;
    list3.push_back(3);
    list3.push_back(5);
    list3.push_back(2);
    list3.push_back(6);
    list3.push_back(1);
    cout<<"Displaying elements of list3 : ";
    display(list3);

    list3.sort();
    cout<<"Displaying elements of list3 after sorting : ";
    display(list3);

    //Margin of the list elements.
    list2.sort();
    list2.merge(list3);
    cout<<"Displaying elements of list2 after merge : ";
    display(list2);

    //Reversing the list.
    list2.reverse();
    cout<<"Displaying elements of list2 after reversing : ";
    display(list2);

    //Swaping of the list.
    
    //getch();
    return(0);
}