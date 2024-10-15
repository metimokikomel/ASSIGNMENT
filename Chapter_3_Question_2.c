#include <stdio.h>

int main(void) {
    float start, end, increment, a, b;

    // Get input values from user
    printf("Enter the starting value (in degrees F): ");
    scanf("%f", &start);

    printf("Enter the ending value (in degrees F): ");
    scanf("%f", &end);

    printf("Enter the increment value: ");
    scanf("%f", &increment);

    // Initialize variables
    a = start;
    b = -1;

    // Print the heading line
    printf("\nFahrenheit to Celsius Conversion Table\n");
    printf("Fahrenheit  |  Celsius\n");
    printf("-----------------------\n");

    // Generate the table
    while (a <= end) {
        if ((a > 98.6) && (b < 98.6)) {
            printf("%6.2f degrees F = %6.2f degrees C\n", 98.6, (98.6 - 32.0) * 5.0 / 9.0);
        }
        printf("%6.2f       |  %6.2f\n", a, (a - 32.0) * 5.0 / 9.0);
        b = a;
        a = a + increment;
    }

    return 0;
}
