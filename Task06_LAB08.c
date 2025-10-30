#include <stdio.h>

#define max 10 

int main() {
    int n, i, j;
    int board_elements[max][max];
    printf("SQUARE BAORD GAME\n");
    printf("_________________\n");
    printf("\nEnter the size of the board (N x N): ");
    scanf("%d", &n);

    printf("\nEnter the elements of the board:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &board_elements[i][j]);
        }
    }

    printf("\nOriginal Game Board:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", board_elements[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            int temp = board_elements[i][j];
            board_elements[i][j] = board_elements[j][i];
            board_elements[j][i] = temp;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n / 2; j++) {
            int temp = board_elements[i][j];
            board_elements[i][j] = board_elements[i][n - j - 1];
            board_elements[i][n - j - 1] = temp;
        }
    }

    printf("\nRotated Game Board (90' Clockwise):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", board_elements[i][j]);
        }
        printf("\n");
    }

    return 0;
}

