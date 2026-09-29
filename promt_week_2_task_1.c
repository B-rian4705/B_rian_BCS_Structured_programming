#include <stdio.h>

int main() {
    float radius, height;
    float volume, surfaceArea;
    float pi = 3.14159;

    // Get input from the user
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume
    volume = pi * radius * radius * height;

    // Calculate surface area
    surfaceArea = 2 * pi * radius * radius + 2 * pi * radius * height;

    // Display results
    printf("\n===== CYLINDER RESULTS =====\n");
    printf("Radius        : %.2f\n", radius);
    printf("Height        : %.2f\n", height);
    printf("Volume        : %.2f\n", volume);
    printf("Surface Area  : %.2f\n", surfaceArea);

    return 0;
}