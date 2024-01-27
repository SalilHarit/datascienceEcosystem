#include<iostream>
using namespace std;
int main()
{
    //pointers = variable that stores a memory address of another variable
    //           sometimes it's easier to work with an address


    // & address of operator
    // * dereference operator

    string name = "Bro";
    int age = 21;
    string freePizza[5]={"pizza1","pizza2","pizza3","pizza4","pizza5"};

    string *pName = &name;
    int *pAge = &age;
    string *pfreePizza = freePizza;

    // char *pAr[1][2]= {"car"};

    cout << *pName;
    cout << *pAge;
    



 return 0;
}