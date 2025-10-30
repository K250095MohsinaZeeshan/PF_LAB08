#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rows, columns;
    printf("\nCINEMA HALL's SEATING ARRANGEMENT\n");
    printf("_________________________________\n");
    printf("\nEnter number of rows in cinema hall: ");
    scanf("%d", &rows);
    printf("\nEnter number of columns in cinema hall: ");
    scanf("%d", &columns);

    int hall[rows][columns];
    srand(time(0));

    printf("\nCinema Hall Seating (0 means Empty, 1 means Occupied):\n");
    int i,j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            hall[i][j] = rand() % 2; 
            printf("%d ", hall[i][j]);
        }
        printf("\n");
    }

    int totalEmpty = 0, maximum_Empty = 0, rowWithMostEmptySeats = 0;

    for(i = 0; i < rows; i++) {
        int rowEmpty = 0;
        for(j = 0; j < columns; j++) {
            if(hall[i][j] == 0)
                rowEmpty++;
        }
        totalEmpty += rowEmpty;
        if(rowEmpty > maximum_Empty) {
            maximum_Empty = rowEmpty;
            rowWithMostEmptySeats = i + 1; 
        }
    }

    printf("\nTotal Available Seats: %d\n", totalEmpty);
    printf("Row with Most Empty Seats: Row %d (%d empty seats available)\n", rowWithMostEmptySeats, maximum_Empty);

    return 0;
}

