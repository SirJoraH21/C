#include <stdio.h>
#include <math.h>

int main(){
    // In this program, an double variables is declared.
    double x, y, z, result;

    // printf() is a library function to send formatted output to the screen. In this program
    printf("Enter coordinates of vector (x, y, z): ");
    scanf("%lf %lf %lf", &x, &y, &z);
    
    result = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    printf("Result: %lf\n", result);

    /* The return 0; statement is the 
     "Exit status" of the program. In simple terms, 
     the program ends with this statement.*/
    return 0;
}