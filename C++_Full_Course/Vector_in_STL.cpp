//Write a program to user vector in C++ programming with Ritik.
#include"iostream"
#include"conio.h"
#include"vector"
using namespace std;

template <class T>
void display(vector <T> &v){
    for(int i= 0; i< v.size(); i++){
        cout<<v[i]<<", ";
    }
}

int main(){
    cout<<"Vectir in STL in C++ programming\n"<<endl;
    
    //vector of integers.
    vector <int> vector1;
    
    int element, size;
    cout<<"Enter the size of the vector : ";
    cin>>size;

    //pusing the elements in to the vector.
    for(int i= 0; i< size; i++){
        cout<<"Enter an element to add to the vector : ";
        cin>>element;
        vector1.push_back(element);
    }

    cout<<endl<<endl;
    //displaying the vector elements.
    display(vector1);

    cout<<endl<<endl;
    //popback element last element from the vector.
    vector1.pop_back();
    display(vector1);

    //inserting element into the vector at the begain using iterator.
    vector <int> ::iterator iter= vector1.begin();
    vector1.insert(iter, 500);
    cout<<endl<<endl;
    display(vector1);

    //inserting element into the vector at the begin with how many times using iterator.
    vector1.insert(iter+ 1, 5, 600);
    cout<<endl<<endl;
    display(vector1);

    //vector for char.
    vector <char> vector2;
    vector2.push_back('R');
    vector2.push_back('i');
    vector2.push_back('t');
    vector2.push_back('i');
    vector2.push_back('k');

    cout<<endl<<endl;
    display(vector2);

    //vector for float.
    vector <float> vector3;
    vector3.push_back(2.4);
    vector3.push_back(3.4);
    vector3.push_back(4.4);
    vector3.push_back(5.4);
    vector3.push_back(6.4);

    cout<<endl<<endl;
    display(vector3);

    //vector for string.
    vector <string> vector4;
    vector4.push_back("Ritik");
    vector4.push_back("verma");
    vector4.push_back("Chomchardi");

    cout<<endl<<endl;
    display(vector4);

    cout<<endl<<endl;
    vector <int> vector5(4, 12);
    display(vector5);
    cout<<endl;
    cout<<vector5.size();

    //getch();
    return(0);
}