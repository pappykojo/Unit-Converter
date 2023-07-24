#include <stdio.h>

// Function prototypes
void convert_length();
void convert_temperature();
void convert_weight();

int main() {
    int choice;

    printf("Welcome to the Unit Converter!\n");

    do {
        printf("\nChoose the conversion type:\n");
        printf("1. Length\n");
        printf("2. Temperature\n");
        printf("3. Weight\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                convert_length();
                break;
            case 2:
                convert_temperature();
                break;
            case 3:
                convert_weight();
                break;
            case 4:
                printf("Thank you for using the Unit Converter. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}

void convert_length() {
    double length, result;

    printf("\nEnter the length in meters: ");
    scanf("%lf", &length);

    // Conversion factors for length
    const double meters_to_feet = 3.28084;
    const double meters_to_inches = 39.3701;

    // Convert meters to feet and inches
    result = length * meters_to_feet;
    printf("Length in feet: %.2lf\n", result);

    result = length * meters_to_inches;
    printf("Length in inches: %.2lf\n", result);
}

void convert_temperature() {
    double celsius, result;

    printf("\nEnter the temperature in Celsius: ");
    scanf("%lf", &celsius);

    // Convert Celsius to Fahrenheit
    result = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2lf\n", result);
}

void convert_weight() {
    double kilograms, result;

    printf("\nEnter the weight in kilograms: ");
    scanf("%lf", &kilograms);

    // Conversion factor for weight
    const double kilograms_to_pounds = 2.20462;

    // Convert kilograms to pounds
    result = kilograms * kilograms_to_pounds;
    printf("Weight in pounds: %.2lf\n", result);
}
