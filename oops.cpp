#include<iostream>
using namespace std;
class Human {
    public:
    string name;
    string occupation;
    int age;

    void eat(){
        cout << "This person is eating\n";
    }

    void drink(){
        cout << "This person is drinking\n";
    }

    void sleep(){
        cout << "This person is sleeping\n";
    }

};
int main()
{
    // object = A collection of attributes and methods
    // they can have characteristics and could perform actions
    // can be used to mimic real world items ( ex. phone,book,dog)
    // created from a class which acts as a "blue-print"
    Human person1;
    person1.name = "John";
    person1.occupation = "Teacher";
    person1.age = 30;

    cout << person1.name << endl;
    cout << person1.occupation << endl;
    cout << person1.age << endl;
 return 0;
}