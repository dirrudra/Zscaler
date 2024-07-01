#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("2-D Array elements:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    int a;
    printf("Enter the value of a: %d\n", a);
    scanf("%d", &a);

    int b;
    printf("Enter the value of b: %d\n", b);
    scanf("%d", &b);

    int arr[a][b];

    for(int i = 0; i < a; i++) {
        for(int j=0;j<b;j++){
            arr[i][j] = i * j; 
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}
