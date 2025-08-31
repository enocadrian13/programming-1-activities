//Create a program that would calculate the force applied on an object using the formula:

//Formula:
// Force = mass x acceleration

#include <stdio.h>
#include <conio.h>
int main() {
    float mass, acceleration, force;
    printf("Enter mass of the object (kg): ");
    scanf("%f", mass);
    printf("Enter acceleration of the object (m/s^2): ");
    scanf("%f", &acceleration);
    
    force = mass * acceleration * 100;

    printf("Force applied on the object is: %f N\n", mass);
    return 0;
}
// Total number of errors: 3

// #OUTPUT
// Enter mass of the object (kg): 10
// Enter acceleration of the object (m/s^2): 9.8
// Force applied on the object is: 98 N

