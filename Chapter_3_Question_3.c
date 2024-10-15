#include <stdio.h>

int main(void) {
    float a, b;
    int printed = 0;  // Flag to track if the special line has been printed

    a = 0;
    b = -1;

    while (a <= 200) {  // Allowing the loop to go up to 200
        if ((a > 98.6) && (b < 98.6) && !printed) {
            printf("%6.2f degrees F = %6.2f degrees C\n", 98.6, (98.6 - 32.0) * 5.0 / 9.0);
            printed = 1;  // Set the flag to 1 after printing
        }
        printf("%6.2f degrees F = %6.2f degrees C\n", a, (a - 32.0) * 5.0 / 9.0);
        b = a;
        a = a + 10;
    }

    return 0;
}
