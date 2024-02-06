#include<iostream>
using namespace std;
    enum Day
    {
    sunday=0,monday=1,tuesday=2,wednesday=3,thursday=4,friday=5,saturday=6
    };
int main()
{

    // enums = a user-defined data type that consists
    //         of paired named-integer constants.
    //         GREAT if you have a set of potential options
    Day today =sunday;
    switch (today)
    {
    case 0 : cout << "It is sunday";
        break;
    
    case 1 : cout << "It is monday";
        break;
    
    case 2 : cout << "It is tuesday";
        break;
    
    case 3 : cout << "It is wednesday";
        break;
    
    case 4 : cout << "It is thursday";
        break;
    
    case 5 : cout << "It is friday";
        break;
        
    case 6 : cout << "It is saturday";
        break;
    }
    return 0;
}