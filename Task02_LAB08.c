#include <stdio.h>

int main() {
    char names[5][20]; 
	int i ;
    printf("DISPLAY OF STUDENT NAMES\n");
    printf("________________________\n");
    printf("\nEnter 5 student names:\n");
    for (i = 0; i < 5; i++) {
        printf("\nName of the %d student: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\nStudent Names:\n");
    for ( i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

