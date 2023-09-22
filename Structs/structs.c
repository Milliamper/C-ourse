#include <stdio.h>
    /* struct:  collection of related members ("variables")
                they can be different data types
                listed under one name in a block of memory
    */
struct Player
{
    int name[20];
    int score;
};


int main() {
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Bob");
    player1.score = 10;

    strcpy(player2.name, "Tim");
    player2.score = 11;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);
}