/*Write a program for a matchstick game played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows
- There are 21 matchsticks
-The computer asks the player to pick 1,2,3 or 4 matchsticks
-After the person picks, the computer does the picking,
-whoever is forced to pick up the last matchstick loses the game*/

#include <stdio.h>

void play_game()
{
    int matchsticks = 21;
    int player_pick, computer_pick;

    printf("Welcome to the matchstick game!\n");
    printf("Rules: Pick 1, 2, 3, or 4 matchsticks. The player who picks the last matchstick loses.\n");

    while (matchsticks > 0)
    {
        printf("\nCurrent matchsticks: %d\n", matchsticks);

        // Player's turn
        printf("Your turn - How many matchsticks do you pick (1-4)? ");
        scanf("%d", &player_pick);
        while (player_pick < 1 || player_pick > 4 || player_pick > matchsticks)
        {
            printf("Invalid input. Please pick 1, 2, 3, or 4 matchsticks: ");
            scanf("%d", &player_pick);
        }

        matchsticks -= player_pick;
        printf("You picked %d matchstick(s).\n", player_pick);

        if (matchsticks <= 0)
        {
            printf("\nOops! You picked the last matchstick. You lose!\n");
            break;
        }

        // Computer's turn
        computer_pick = 5 - player_pick;
        printf("Computer picked %d matchstick(s).\n", computer_pick);
        matchsticks -= computer_pick;

        if (matchsticks <= 0)
        {
            printf("\nThe computer picked the last matchstick. You win!\n");
            break;
        }
    }
}

int main()
{
    play_game();
    return 0;
}
