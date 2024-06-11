#include <stdio.h>

int gameStatus = 0; // 0 - Not started. 1 - In game. 2 - Finished
int numberOfRows;
int numberOfColumns;

void prepareGame();
void drawBoard();
int printWinner();


int main(int argc, char *argv[]){
    char fields[] = {};
    int currentMove; // 0 - Player. 1 - Computer
    int killStreak; // AKA combo

    prepareGame(argc, argv);

    drawBoard();

    // TODO: Add way to clear console

    return 0;
}

void prepareGame(){
    printf("\nHow many rows should be?");
    scanf("%d", &numberOfRows);
    printf("\nHow many columns should be?");
    scanf("%d", numberOfColumns);
    gameStatus = 0;
}

void drawBoard(){
    printf("drawBoard is executed");
}