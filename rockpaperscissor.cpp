#include<iostream>
#include<cstdlib>
#include<ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void determineWinner(char userChoice, char computerChoice);

using namespace std;

int main()
{
    char userChoice, computerChoice;
    
    userChoice = getUserChoice();
    computerChoice = getComputerChoice();
    
    cout << "User's choice: ";
    showChoice(userChoice);
    
    cout << "Computer's choice: ";
    showChoice(computerChoice);
    
    determineWinner(userChoice, computerChoice);
    
    return 0;
}

char getUserChoice()
{
    char choice;
    
    cout << "Enter your choice (R for Rock, P for Paper, S for Scissors): ";
    cin >> choice;
    
    return choice;
}

char getComputerChoice()
{
    srand(time(0));
    int randomNum = rand() % 3;
    
    if (randomNum == 0)
        return 'R';
    else if (randomNum == 1)
        return 'P';
    else
        return 'S';
}

void showChoice(char choice)
{
    if (choice == 'R')
        cout << "Rock" << endl;
    else if (choice == 'P')
        cout << "Paper" << endl;
    else if (choice == 'S')
        cout << "Scissors" << endl;
}

void determineWinner(char userChoice, char computerChoice)
{
    if (userChoice == computerChoice)
        cout << "It's a tie!" << endl;
    else if ((userChoice == 'R' && computerChoice == 'S') ||
             (userChoice == 'P' && computerChoice == 'R') ||
             (userChoice == 'S' && computerChoice == 'P'))
        cout << "You win!" << endl;
    else
        cout << "Computer wins!" << endl;
}