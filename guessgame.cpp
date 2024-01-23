#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int num;
    int guess;
    int tries;
    
    srand(time(NULL));
    num=(rand()%100)+1;
    cout << "********* NUMBER GUESSING GAME *********\n";

    #include <iostream>

    do
    {
        cout << "enter a guess between 1-100:";
        cin >> guess;
        tries++;
        if (guess > num) {
            cout << "Too high \n";
        } else if (guess < num) {
            cout << "Too low \n";         
        } else {
            cout << "You guessed correct ! \n";
        }
    } while (guess != num);

    cout << "*******************************************";
    
  
 return 0;
}