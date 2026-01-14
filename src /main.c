//use libarary in a script

#include "trigonometry.h"
#include <stdio.h>

int main() {
    int choice;

    printf("Do you want to:\n");
    printf(" 1. Find sector length\n");
    printf(" 2. Find sector area\n");
    printf(" 3. Find distance between two points\n");
    printf("Enter choice (1,2, 3): ");

    scanf("%d", &choice);

    if (choice == 1) {
        sector_length();
    } else if (choice == 2) {
        sector_area();
    } else if (choice == 3) {
        distance();
    } else {
        printf("Invalid choice.\n");
    }

    return 0;

}

