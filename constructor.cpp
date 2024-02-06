#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    string major;
    double gpa;
    student(string aName,string aMajor,double aGpa)
    {
        name=aName;
        major=aMajor;
        gpa=aGpa;
    }
};
int main()
{
    student student1("Jim","Business",2.4);
    student student2("Pam","Art",3.6);
    cout << student1.name << endl;
    cout << student1.major << endl;
    cout << student1.gpa << endl;   
    cout << student2.name << endl;
    cout << student2.major << endl;
    cout << student2.gpa << endl;
 return 0;
}