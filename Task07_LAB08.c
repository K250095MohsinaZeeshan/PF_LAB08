#include <stdio.h>

int main() {
    int sections = 2, shelves = 3, items = 4;
    int inventory[2][3][4];
    int sectionTotal[2] = {0, 0};
    int shelfTotals[2][3] = {0};  
    int sec,shelf,i;
    printf("PRODUCTS MANAGEMENTS IN WAREHOUSE\n");
    printf("_________________________________\n");
    printf("\nEnter the quantity of each item in the shelves of the warehouse.\n");

    for (sec = 0; sec < sections; sec++) {
        printf("\n--- Section %d ---\n", sec + 1);
        for (shelf = 0; shelf < shelves; shelf++) {
            printf("Shelf %d:\n", shelf + 1);
            for (i = 0; i < items; i++) {
                printf("  Item %d quantity: ", i + 1);
                scanf("%d", &inventory[sec][shelf][i]);
            }
        }
    }
    for (sec = 0; sec < sections; sec++) {
        for (shelf = 0; shelf < shelves; shelf++) {
            int shelfSum = 0;
            for (i = 0; i < items; i++) {
                shelfSum += inventory[sec][shelf][i];
            }
            shelfTotals[sec][shelf] = shelfSum;
            sectionTotal[sec] += shelfSum;
        }
    }
    int maximumShelfTotal = shelfTotals[0][0];
    int maxSection = 0;
    int maxShelf = 0;

    for (sec = 0; sec < sections; sec++) {
        for (shelf = 0; shelf < shelves; shelf++) {
            if (shelfTotals[sec][shelf] > maximumShelfTotal) {
                maximumShelfTotal = shelfTotals[sec][shelf];
                maxSection = sec;
                maxShelf = shelf;
            }
        }
    }

    printf("\n===== TOTAL ITEMS IN EACH SECTION OF INVENTORY =====\n");
    printf("====================================================\n");
    for (sec = 0; sec < sections; sec++) {
        printf("\nTotal items in Section %d: %d\n", sec + 1, sectionTotal[sec]);
    }
    printf("\n----------------------------------------------------\n");
    printf("\nShelf with Highest Quantity of Items:\n");
    printf("\nSection %d, Shelf %d \nTotal Items: %d\n", maxSection + 1, maxShelf + 1, maximumShelfTotal);

    return 0;
}

