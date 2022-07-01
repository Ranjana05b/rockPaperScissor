#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return -1;
    }
    else if (char1 == 'p' && char2 == 'r')
    {
        return 1;
    }
    else if (char1 == 'r' && char2 == 'p')
    {
        return 0;
    }

    else if (char1 == 's' && char2 == 'p')
    {
        return 1;
    }
    else if (char1 == 'p' && char2 == 's')
    {
        return 0;
    }
    else if (char1 == 'r' && char2 == 's')
    {
        return 1;
    }
    else if (char1 == 's' && char2 == 'r')
    {
        return 0;
    }
}
int main()
{
    // printf("Enter your name\n");
    int temp, playerScore = 0, compScore = 0;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the game\n");
    printf("What is your choice Rock,Paper or Scissors\n");
    for (int i = 0; i < 3; i++)
    {
        //take player 1 input
        printf("Player 1's turn\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You choose %c\n\n", playerChar);
        //generating computer input
        printf("Computer's turn\n");
        temp = randomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("computer chooses %c\n\n", compChar);

        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("compter got it\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("Its a Draw\n");
        }
        else
        {
            playerScore += 1;
            printf("You got it\n");
        }
        printf("You: %d\nComputer: %d\n", playerScore, compScore);
    }
    if (playerScore > compScore)
    {
        printf("You wins the game\n");
    }
    else if (playerScore < compScore)
    {
        printf("Computer wins the game");
    }
    else
    {
        printf("Its a draw");
    }

    return 0;
}