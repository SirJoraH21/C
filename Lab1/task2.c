#include <stdio.h>

int main()
{
    // In this program, an integer variables is declared.
    int number1, number2, number3;

    // printf() is a library function to send formatted output to the screen. In this program
    printf("Enter three integers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    // if we have some equal numbers, we increment them
    if (number1 == number2 || number2 == number3 || number3 == number1)
    {
        number1 += 5; 
        number2 += 5; 
        number3 += 5;

        printf("Result: %d %d %d", number1, number2, number3);
    }
    else
    {
        printf("The is no equal numbers");
    }

    /* The return 0; statement is the 
     "Exit status" of the program. In simple terms, 
     the program ends with this statement.*/
    return 0;
}