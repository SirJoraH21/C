#include <stdio.h>

int main() {
    float matrix[9], result;
    for (int i = 0; i < 9; i++) {
        scanf("%f", &matrix[i]);
    };
    result = matrix[0] * matrix[4] * matrix[8] + matrix[1] * matrix[5] * matrix[6] + matrix[3] * matrix[7] * matrix[2] -
             matrix[2] * matrix[4] * matrix[6] - matrix[1] * matrix[3] * matrix[8] - matrix[0] * matrix[5] * matrix[7] ;
    printf("Determinant = %f", result);
    return 0;
}