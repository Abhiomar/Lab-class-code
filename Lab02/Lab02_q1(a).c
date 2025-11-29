//Q1(a):WAP a C program to calculate the area and perimeter of a rectangle based on its length and width. User should provide input for length and breadth.(a) all variables should be declared integer type.
#include <stdio.h>
int main() {
    int length, breadth, area, perimeter;
    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter rectangle: ");
    scanf("%d", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);
    return 0;
}
