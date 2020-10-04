#include <stdio.h>
#include <math.h>

int main() {
    int num, divisors[9], sum = 0;

    printf("Enter your number: ");
    scanf("%d", &num);
    int counter = 0;
    for (int i = 1; i < num; i++){
        if (num % i == 0) {
            divisors[counter] = i;
            counter++;
        }
    }
    for (int i = 0; i < 9; i++) {
        sum += divisors[i];
    }
    if (num == sum) {
        for (int i = 0; i < 9; i++) {
            printf("%d\n", divisors[i]);
        }
    } else {
        printf("%d is not a exelent number", num);
    }

}