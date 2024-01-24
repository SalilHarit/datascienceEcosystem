#include<iostream>
using namespace std;
void happyBirthday(string name,int age);
int main()
{
    string name="Salil";
    int age=22;
    happyBirthday(name,age);
 return 0;
}

void happyBirthday(string name,int age){
    cout << "Happy Birthday to "<< name << " you're now "<<age<<" years old"<<'\n';
    cout << "Happy Birthday to you \n";
    cout << "Happy Birthday dear you \n";
    cout << "Happy Birthday to you \n";
}