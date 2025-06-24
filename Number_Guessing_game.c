// Number guessing game with quit feature and play again feature with limited attempt

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{

    int guess, num, maxattempt = 5;
    char choice;
    srand(time(NULL));
    do
    {
        // random number genration programme
        num = rand() % 100 + 1;
        printf("the random number is genrated \n Now\n");
        printf("you have maximum five attempts\n");
        int attempt = 0;

        // guessing logic
        while (attempt < maxattempt)
        {

            printf("guess the number :(1-100)\t");
            scanf("%d", &guess);
            if (guess == num)
            {
                printf("yes your guess number %d is right\n ", num);
                break;
            }
            else if (guess > num)
            {
                printf("please enter the lower value\n");
            }
            else
            {
                printf("please enter higher value\n");
            }
            attempt++;
            if (attempt == maxattempt)
            {
                printf("You didnt guess the number under limited attemp the right number is %d\n", num);
            }
        }
        // play again feature
        printf("Do you want to play again (Y/N):");
        scanf(" %c", &choice);

#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
    } while (choice == 'Y' || choice == 'y');

    printf("thanks for playing\n");
    return 0;
}
