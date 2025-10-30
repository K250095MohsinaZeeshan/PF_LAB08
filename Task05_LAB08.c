#include <stdio.h>

int main() {
    int studentsCount = 5, subjectsCount = 4;
    int marks[5][4];
    int i,j;
    printf("STUDENTS MARKS DATA\n");
    printf("___________________\n");
    
    printf("\nEnter marks of 5 students in 4 subjects(out of 100):\n");
    for(i = 0; i < studentsCount; i++) {
        printf("\nStudent %d:\n", i + 1);
        for(j = 0; j < subjectsCount; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    float avg[5];
    for(i = 0; i < studentsCount; i++) {
        int sum = 0;
        for(j = 0; j < subjectsCount; j++) {
            sum += marks[i][j];
        }
        avg[i] = sum / (float)subjectsCount;
    }

    int highest[4];
    for(j = 0; j < subjectsCount; j++) {
        int maximum = marks[0][j];
        for(i = 1; i < studentsCount; i++) {
            if(marks[i][j] > maximum)
                maximum = marks[i][j];
        }
        highest[j] = maximum;
    }

    printf("\nAverage marks of each student: [");
    for(i = 0; i < studentsCount; i++) {
        printf("%.2f", avg[i]);
        if(i < studentsCount - 1) printf(", ");
    }
    printf("]\n");

    printf("Highest marks in each subject: [");
    for(j = 0; j < subjectsCount; j++) {
        printf("%d", highest[j]);
        if(j < subjectsCount - 1) printf(", ");
    }
    printf("]\n");
   

    return 0;
}

