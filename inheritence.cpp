#include<iostream>
using namespace std;
class Animal {
    public:
        bool alive=true;
        void eat() {
            cout << "This animal is eating" << endl;
        }
        void breathe() {
            cout << "Inhale, Exhale" << endl;
        }
}; // Added closing brace for the Animal class

class Dog : public Animal {
    public:
        string breed;
        string color;
        void bark() {
            cout << "Woof" << endl;
        }
}; // Added closing brace for the Dog class

int main()
{
    // inheritance = a class can inherit
    // attributes and methods from another class
    // "child class" = the class that inherits from another class
    // "parent class" = the class being inherited from
     Dog dog;
     cout << dog.alive <<endl;
 return 0;
}