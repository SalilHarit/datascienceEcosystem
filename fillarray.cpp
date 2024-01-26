#include<iostream>
#include<string>
using namespace std;

#include <limits> // Include the missing header file.

int main()
{
    string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    string temp;

    for(int i =0;i < size;i++)
    {
        cout << "Enter a food you like # or 'q' to quit" << i + 1 << " : ";
        getline(cin, temp); // Add a semicolon at the end.
        if (temp == "q") // Compare the input with "q" using the == operator.
        {
            break;
        }
        else{
            foods[i]=temp;
        }
    }

    cout << "You like the following food: \n";

    for(int i=0;!foods[i].empty();i++)
    {
        cout << foods[i] << '\n';
    }

    return 0;
}