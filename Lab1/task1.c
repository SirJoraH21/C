#include <stdio.h>

int main()
{
    // In this program, an integer variables is declared.
    int number1, number2;

    // printf() is a library function to send formatted output to the screen. In this program
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // if statament
    if (number1 > number2)
    {
        printf("First nuber is bigger");
    }
    else if (number1 < number2)
    {
        printf("Second nuber is bigger");
    }
    else
    {
        printf("The numbers are equal");
    }

    /* The return 0; statement is the 
     "Exit status" of the program. In simple terms, 
     the program ends with this statement.*/
    return 0;
}