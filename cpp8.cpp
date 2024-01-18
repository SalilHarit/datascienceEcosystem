#include <iostream>
using namespace std;

int main() {

int temp;
// && = check if two conditions are true
// || = check if at least one of the two conditions are true
// ! = reverses the logical state of its operand
cout << "Enter the temperature \n";
cin >> temp;

// if (temp > 0 && temp <30){

//     cout << "The temperature is good";
// }
// else {

//     cout << "The temperature is bad";
// }
if (temp > 0 || temp <30){

    cout << "The temperature is good";
}
else {

    cout << "The temperature is bad";
}
    return 0;
}