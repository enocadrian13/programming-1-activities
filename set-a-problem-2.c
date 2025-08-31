// Create a program that would calculate the area of a triangle using the formula:

//Formula:
// Area = 1/2 (base x height)


#include <stdio.h>
#include <conio.h>
int main() {
    float base, height, area;
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    
    area = 0.5 * base * height
    printf("Area of the triangle is: %.2f\n", area);

    system("pause");
    return 0;
}


//Total number of errors: 3


// #OUTPUT

// Enter the base of the triangle: 5
// Enter the height of the triangle: 10
// Area of the triangle is: 25