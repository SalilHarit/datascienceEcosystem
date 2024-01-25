#include<iostream>
using namespace std;
int main()
{
    //sizeof()= determines the size in bytes of a :
    //          variable,data type,class,objects,etc
    // string name = "salil";
    // double gpa=5.0;
    // char grade ='A';
    // bool student = true;
    // cout << sizeof(student) << " bytes\n";

    //string students[] = {"Spongebob","Patrick","Squidward"};
    char grades[] = {'A','B','C','D','F'};

    for(int i =0; sizeof(grades)/sizeof(char);i++){ //for iterating over an array take sizeof(arrayname)/sizeof(datatype of array)

        cout << grades[i]<< '\n';

    }

 return 0;
}