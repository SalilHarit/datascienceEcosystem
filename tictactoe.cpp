#include<iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces,char player);
void computerMove(char *spaces,char computer);
bool checkWinner(char *spaces,char player,char computer);
bool checkTie(char *spaces);

using namespace std;

int main()
{
    char spaces[9]={' ',' ',' ',' ',' ', ' ',' ',' ',' '};
    char player = 'x';
    char computer = '0';
    bool running =true;

    drawBoard(spaces);

    while (running)
    {
        playerMove(spaces,player);
        drawBoard(spaces);
        if(checkWinner(spaces,player,computer)){

            running=false;
            break;
        }
    }
    

 return 0;
}

void drawBoard(char *spaces){

    cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << " " << endl;
    cout << "---+---+---" << endl;
    cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << " " << endl;
    cout << "---+---+---" << endl;
    cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << " " << endl;

}
void playerMove(char *spaces,char player){
    int number;
    do
    {
        cout << "Enter a spot to place a marker (1-9): ";
        cin >> number;
        number--;
    } while(number < 0 || number > 8 || spaces[number] != ' ');

    spaces[number] = player;
    drawBoard(spaces);
}
void computerMove(char *spaces,char computer){
    int number;
    srand(time(0));
    while (true)
    {
        number = rand() % 9;
        if(spaces[number]==' '){
            spaces[number]==computer;
            break;
        }
    }
    

}
bool checkWinner(char *spaces,char player,char computer){
    
    // Check rows
    for(int i = 0; i < 3; i++){
        if(spaces[i] == player && spaces[i+1] == player && spaces[i+2] == player)
            return true;
        if(spaces[i] == computer && spaces[i+1] == computer && spaces[i+2] == computer)
            return true;
    }

    // Check columns
    for(int i = 0; i < 3; i++){
        if(spaces[i] == player && spaces[i+3] == player && spaces[i+6] == player)
            return true;
        if(spaces[i] == computer && spaces[i+3] == computer && spaces[i+6] == computer)
            return true;
    }

    // Check diagonals
    if((spaces[0] == player && spaces[4] == player && spaces[8] == player) ||
       (spaces[2] == player && spaces[4] == player && spaces[6] == player))
        return true;
    if((spaces[0] == computer && spaces[4] == computer && spaces[8] == computer) ||
       (spaces[2] == computer && spaces[4] == computer && spaces[6] == computer))
        return true;

    return false;

}
bool checkTie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    return true;
}