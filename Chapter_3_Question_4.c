#include <stdio.h>

int main(void) {
    float start, end, increment, pounds, kilograms;

    // Get input values from user
    printf("Enter the starting value (in pounds): ");
    scanf("%f", &start);

    printf("Enter the ending value (in pounds): ");
    scanf("%f", &end);

    printf("Enter the increment value: ");
    scanf("%f", &increment);

    // Print the heading line
    printf("\nPounds to Kilograms Conversion Table\n");
    printf("Pounds   |  Kilograms\n");
    printf("----------------------\n");

    // Initialize variables
    pounds = start;

    // Generate the table
    while (pounds <= end) {
        kilograms = pounds * 0.453592;  // Conversion factor from pounds to kilograms
        printf("%6.2f    |  %6.2f\n", pounds, kilograms);
        pounds += increment;
    }

    return 0;
}
