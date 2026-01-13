//file to create functions for library

#include <stdio.h>
#include <math.h>
#include <string.h>

int sector_length() {
    float theta;
    float radius;
    float arc_length;
    char response1[10];
    const float PI = 3.14159;

    printf("Is the degree measure in radians (y/n)?: ");
    scanf(" %c", &response1[0]);


    printf("What is the degree measure?: ");
    scanf("%f", &theta);

    if (response1[0] == 'n' || response1[0] == 'N') {
        theta = theta * (PI / 180.0);
    }

    printf("What is the radius?: ");
    scanf("%f", &radius);

    arc_length = theta * radius;

    printf("The arc length is: %f\n", arc_length);

    return 0;
}

#include <stdio.h>
#include <math.h>

float sector_area() {
    float radius;
    float theta;
    const float PI = 3.14159;
    char answer1[3];
    float area;

    printf("We will find the sector area.\n");

    printf("What is the radius?: ");
    scanf("%f", &radius);

    // Clear leftover newline before fgets
    getchar();

    printf("Is the degree measure in radians (y/n)?: ");
    fgets(answer1, sizeof(answer1), stdin);

    printf("What is the degree measure?: ");
    scanf("%f", &theta);

    if (answer1[0] == 'n' || answer1[0] == 'N') {
        theta = theta * (PI / 180.0);
    }

    area = 0.5 * radius * radius * theta;

    printf("The area of this sector is: %f\n", area);

    return area;
}

float distance() {
    float x1, x2, y1, y2;
    float dx, dy;
    float d;

    printf("Let's find the distance between two points.\n");

    printf("What is x1?: ");
    scanf("%f", &x1);

    printf("What is x2?: ");
    scanf("%f", &x2);

    printf("What is y1?: ");
    scanf("%f", &y1);

    printf("What is y2?: ");
    scanf("%f", &y2);

    dx = x2 - x1;
    dy = y2 - y1;

    d = sqrt(pow(dx, 2) + pow(dy, 2));

    printf("The distance between the points is: %f\n", d);

    return d;
}

int main() {
    int text1;

    printf("Do you want to:\n 1. find sector length \n 2. find sector area \n 3. find distance between two points? (1,2,3): ");
    scanf("%d", &text1);

    if (text1 == 1) {
        sector_length();
    }
    else if (text1 == 2) {
        sector_area();
    }
    else if (text1 == 3) {
        distance();
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}
