/*
 * =====================================================================================
 *
 *       Filename:  rsp.c
 *
 *        Version:  1.0
 *        Created:  04/14/23 04:02:40
 *       Compiler:  gcc
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;
    int player_score = 0, computer_score = 0;
    char play_again;

    printf("Welcome to Rock-Paper-Scissors!\n");

    do {
        // Get player's choice
        printf("Choose your move (1 = rock, 2 = paper, 3 = scissors): ");
        scanf("%d", &player);

        // Generate computer's choice
        srand(time(NULL));
        computer = rand() % 3 + 1;

        // Determine winner and update scores
        if ((player == 1 && computer == 3) || (player == 2 && computer == 1) || (player == 3 && computer == 2)) {
            printf("You win!\n");
            player_score++;
        } else if ((computer == 1 && player == 3) || (computer == 2 && player == 1) || (computer == 3 && player == 2)) {
            printf("Computer wins!\n");
            computer_score++;
        } else {
            printf("It's a tie!\n");
        }

        // Display scores
        printf("Score: You %d, Computer %d\n", player_score, computer_score);

        // Ask if the player wants to play again
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &play_again);
    } while (play_again == 'y' || play_again == 'Y');

    printf("Thanks for playing!\n");

    return 0;
}
