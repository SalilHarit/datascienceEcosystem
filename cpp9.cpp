#include <iostream>
#include <string> // Include the <string> header

using namespace std;

int main (){

    string name;
    cout << "Enter your name: ";
    getline(cin,name); // Use getline without the std namespace prefix
    name.erase(0,3);
    if (name.length()>12)
    {
        cout << "Your name cannot be more than 12 letters long";

    }
    else 
    {
        cout << "Welcome" << name;
    }
    if (name.empty())
    {
        cout << "Your name cannot be empty";

    }
    

    return 0;
}
