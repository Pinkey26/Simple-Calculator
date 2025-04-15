#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void Print_Menu();
int main()
{
    int num1, num2, choice, result;

    while (1)
    {
        Print_Menu();

        printf("\n Enter Your Choice: ");
        scanf("%d", &choice);
        if (choice == 7)
        {
            break;
        }

        if(choice<1 || choice>7) {
            printf("\nInvalid Choice");
            continue;
        }
        printf("\nEnter the first number: ");
        scanf("%d", &num1);
        printf("\nEnter the second number: ");
        scanf("%d", &num2);

        switch (choice)
        {
        case 1:
            printf("\n**************\n");
            printf("Additon : %d ", (num1 + num2));
            printf("\n**************\n");
            break;
        case 2:
            printf("\n******************\n");
            printf("Subtraction : %d ", (num1 - num2));
            printf("\n******************\n");
            break;
        case 3:
            printf("\n******************\n");
            printf("Subtraction : %d ", (num1 * num2));
            printf("\n******************\n");
            break;
        case 4:
            if (num1 > 0 && num2 > 0)
            {
                printf("\n******************\n");
                printf("Division: %d ", (num1 / num2));
                printf("\n******************\n");
            }
            else
            {
                printf("Invalid Number");
            }
            break;
        case 5:
            if (num1 > 0 && num2 > 0)
            {
                printf("\n******************\n");
                printf("Modular : %d ", (num1 % num2));
                printf("\n******************\n");
            }
            else
            {
                printf("Invalid Number");
            }

            break;
        case 6:
            result = pow(num1, num2);
            printf("\n******************\n");
            printf("Power : %d ", result);
            printf("\n******************\n");
            break;
        case 7:
            exit(1);
            // default:
            //     printf("\nInvalid Choices");
        }
    }
    return 0;
}
void Print_Menu()
{
    printf("\n----------------------------------------------------\n");
    printf("\n Choose one of the following");
    printf("\n 1.Addtion\n 2.Subraction \n 3.Multiplication\n 4.Division \n 5.Modular\n 6.Power\n 7.Exit\n");
}