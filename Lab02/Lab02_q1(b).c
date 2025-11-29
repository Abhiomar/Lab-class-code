//Q1(b):WAP a C program to calculate the area and perimeter of a rectangle based on its length and width. User should provide input for length and breadth.(b) all variables should be declared float type.
#include <stdio.h>
int main() {
    float length, breadth, area, perimeter;
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter breadth: ");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
    return 0;
}
