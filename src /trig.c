//file to create functions for library

#include <stdio.h>
#include "trigonometry.h"

int main() {
    int choice;
    printf("Choose:\n1. Sector length\n2. Sector area\n3. Distance\n");
    scanf("%d", &choice);

    if (choice == 1) {
        float r, a;
        printf("radius: "); scanf("%f", &r);
        printf("angle (radians): "); scanf("%f", &a);
        printf("Arc length = %f\n", sector_length(r, a));
    }
    else if (choice == 2) {
        float r, a;
        printf("radius: "); scanf("%f", &r);
        printf("angle (radians): "); scanf("%f", &a);
        printf("Area = %f\n", sector_area(r, a));
    }
    else if (choice == 3) {
        float x1, y1, x2, y2;
        printf("x1 y1 x2 y2: ");
        scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
        printf("Distance = %f\n", distance(x1, y1, x2, y2));
    }

    return 0;
}
