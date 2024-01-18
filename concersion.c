#include <stdio.h>

int main() {
    int choice;
    double value;

    while (1) {
        // Display menu
        printf("Metric Conversion App\n");
        printf("1. Kilogram to Pound\n");
        printf("2. Gram to Ounces\n");
        printf("3. Kilometer to Mile\n");
        printf("4. Millimeter to Inch\n");
        printf("Enter your choice (-1 to exit): ");
        
        // Accept user input for choice
        scanf("%d", &choice);

        // Check for exit condition
        if (choice == -1) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        // Accept value to convert
        printf("Enter the value to convert: ");
        scanf("%lf", &value);

        // Perform conversion based on user choice
        switch (choice) {
            case 1:
                printf("\n%.2f kg is equal to %.2f lb\n\n\n", value, value * 2.20462);
                break;
            case 2:
                printf("\n%.2f grams is equal to %.2f ounces\n\n\n", value, value * 0.03527396);
                break;
            case 3:
                printf("\n%.2f km is equal to %.2f miles\n\n\n", value, value * 0.621371);
                break;
            case 4:
                printf("\n%.2f mm is equal to %.2f inches\n\n\n", value, value * 0.0393701);
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}