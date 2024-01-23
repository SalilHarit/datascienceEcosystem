#include<iostream>
#include <ctime>
using namespace std;

int main()
{
    // int number;
    // do
    // {
    //     cout << "Enter a positive #: ";
    //     cin >> number;    
    // } while (number > 0);
    // cout << "The # is:" << number;

    // Uncomment the following block if you want to input a positive number from the user
    /*
    int number;
    do
    {
        cout << "Enter a positive #: ";
        cin >> number;    
    } while (number > 0);
    cout << "The # is:" << number;
    */

    // Uncomment the following block if you want to output "HAPPY NEW YEAR!" 11 times
    /*
    for (int i = 0; i <= 10; i++)
    {
        cout << "HAPPY NEW YEAR!\n";
    }
    */

    // pseudo-random = not truly random (but close)
    srand(time(NULL));

    int num = (rand() % 6) + 1;

    cout << "Random number between 1 and 6: " << num;

    return 0;
}
