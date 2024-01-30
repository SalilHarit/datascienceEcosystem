#include<iostream>
#include<string> // Add missing include directive for the string type
using namespace std;
struct student {
    string name;
    double gpa;
    bool enrolled=true;
};
int main()
{
    // struct = A structure that groups related variables under one name
    //          structs can contain many different data types (strings,chars,int etc)
    //          variables in a struct are known as "members"
    //          members can be access with ."Class Member Access Operator"
    student student1;
    student1.name="Spongebob";
    student1.gpa=3.2;


    cout << student1.name << '\n';
    cout << student1.gpa << '\n';
    cout << student1.enrolled << '\n';

    student student2;
    student2.name="Patrick"; // Correct the assignment statement for the name variable
    student2.gpa=2.0; // Correct the assignment statement for the gpa variable


    cout << student2.name << '\n';
    cout << student2.gpa << '\n';
    cout << student2.enrolled << '\n';


    student student3;
    student3.name="Squidward";
    student3.gpa=4.0;
    student3.enrolled=false;


    cout << student3.name << '\n';
    cout << student3.gpa << '\n';
    cout << student3.enrolled << '\n';


 return 0;
}