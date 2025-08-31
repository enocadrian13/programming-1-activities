// Create a program that would calculate the final velocity of an object using the 
// formula:
// final_velocity = initial_velocity + (acceleration x time)


#include <stdio.h>
#include <conio.h>
int main() {
    float initial_velocity, acceleration, time, final_velocity;
    printf("Enter initial velocity (m/s): ");
    scanf("%d", &initial_velocity);
    printf("Enter acceleration (m/s^2): ");
    scanf("%f", acceleration);
    printf("Enter time taken (s): ");
    scanf("%f", time);
    
    final_velocity = initial_velocity + acceleration * time
    printf("Final velocity of the object is: %.2f m/s\n", initial_velocity);
}

// Total number of errors: 7
// Output
// Enter initial velocity (m/s): 0
// Enter acceleration (m/s^2): 2
// Enter time taken (s): 5
// Final velocity of the object is: 10.00 m/s
