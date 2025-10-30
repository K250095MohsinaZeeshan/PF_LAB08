#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int image[8][8];
    int brightened_image[8][8];
    srand(time(0));
    int i,j;
    printf("PIXELS INTENSITY AND IMAGE\n");
    printf("__________________________\n");
    printf("\nOriginal Image is:\n");
    for ( i = 0; i < 8; i++) {
        for ( j = 0; j < 8; j++) {
            image[i][j] = rand() % 256;
            printf("%3d ", image[i][j]);
        }
        printf("\n");
    }

    printf("\nBrightened Image will be :\n");
    for (i = 0; i < 8; i++) {
        for ( j = 0; j < 8; j++) {
            brightened_image[i][j] = image[i][j] + 20;
            if (brightened_image[i][j] > 255) brightened_image[i][j] = 255;
            printf("%3d ", brightened_image[i][j]);
        }
        printf("\n");
    }

    return 0;
}

