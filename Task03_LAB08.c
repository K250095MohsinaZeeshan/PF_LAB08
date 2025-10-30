#include <stdio.h>

int main() {
    char words[3][10];
    int vowelsCount = 0;
    int i,j;
    printf("VOWELS COUNTER\n");
    printf("______________\n");
    printf("\nEnter 3 words of your choice:\n");
    for ( i = 0; i < 3; i++) {
        scanf("%s", words[i]);
    }

    for ( i = 0; i < 3; i++) {
        for (j = 0; words[i][j] != '\0'; j++) {
            char c = words[i][j];
            if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U'|| 
                c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
                vowelsCount++;
            }
        }
    }

    printf("\nTotal number of vowels in the words you have entered: %d\n", vowelsCount);
    return 0;
}

