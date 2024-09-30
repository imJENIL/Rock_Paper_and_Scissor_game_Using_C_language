#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int choice_first;
    int choice_second;
    int choice_third;
    int wins = 0;
    int loses = 0;

    printf("\n----------------------------------------------------------------------------------------------\n");

    printf("\n Please Enter the one of the Entries:\n");
    printf("1.Play\n");
    printf("2.Exit\n");
    printf("\n----------------------------------------------------------------------------------------------\n");
    scanf("%d", &choice_first);

    printf("\n----------------------------------------------------------------------------------------------\n");

    if (choice_first == 2){
        return 1;
    }

    do{

        srand(time(0));
        int randomnumber = (rand() % 3) + 1;

        printf("select one of the choices:\n");
        printf("1.Stone\n");
        printf("2.Paper\n");
        printf("3.Scissor\n");
        printf("\n----------------------------------------------------------------------------------------------\n");
        scanf("%d", &choice_second);

        printf("\n----------------------------------------------------------------------------------------------\n");

        if (randomnumber == 1 && choice_second == 1){
            printf("\nComputer choice : Stone\n");
            printf("Draw\n");
        }

        else if (randomnumber == 2 && choice_second == 2){
            printf("\nComputer choice : Paper\n");
            printf("Draw\n");
        }

        else if (randomnumber == 3 && choice_second == 3){
            printf("\nComputer choice : Scissor\n");
            printf("Draw\n");
        }

        else if (randomnumber == 1 && choice_second == 2){
            printf("\nComputer choice : Stone\n");
            printf("You Win.\n");
            wins++;
        }

        else if (randomnumber == 2 && choice_second == 3){
            printf("\nComputer choice : Paper\n");
            printf("You Win.\n");
            wins++;
        }

        else if (randomnumber == 3 && choice_second == 1){
            printf("\nComputer choice : Scissor\n");
            printf("You Win.\n");
            wins++;
        }

        else if (randomnumber == 1 && choice_second == 3){
            printf("\nComputer choice : stone\n");
            printf("You lose.\n");
            loses++;
        }

        else if (randomnumber == 2 && choice_second == 1){
            printf("\nComputer choice : Paper\n");
            printf("You lose.\n");
            loses++;
        }

        else if (randomnumber == 3 && choice_second == 2){
            printf("\nComputer choice : Scissor\n");
            printf("You lose.\n");
            loses++;
        }

        else if( choice_second != 1 || choice_second != 2 || choice_second != 3){
            printf("Please Enter the correct entry!!");
        }

        printf("\n----------------------------------------------------------------------------------------------\n");

        printf("Win : %d    Lose : %d\n", wins, loses);

        printf("\n----------------------------------------------------------------------------------------------\n");
        printf("----------------------------------------------------------------------------------------------\n");

        printf("1.Restart the game\n");
        printf("2.Exit\n");
        printf("\n----------------------------------------------------------------------------------------------\n");
        scanf("%d", &choice_third);
        printf("\n----------------------------------------------------------------------------------------------\n");

    } while (choice_third != 2);

    return 0;
}