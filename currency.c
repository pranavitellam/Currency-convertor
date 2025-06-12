#include <stdio.h> 
#include <stdbool.h>

// Maximum number of conversions to store in history #define MAX_HISTORY_SIZE 15

// Structure to store conversion history typedef struct { float originalAmount; int sourceCurrencyIndex; int targetCurrencyIndex; float convertedAmount; } ConversionRecord;

// Function to perform currency conversion float performConversion(float amount, float exchangeRate) { return amount * exchangeRate; }

int main() { // Predefined exchange rates float exchangeRates[] = {1.0, 0.92, 149.07, 82.89, 0.79, 0.31, 0.88}; // USD, Euro, Yen, INR, Pound, Kuwaiti Dinar, Swiss Franc

// Currency symbols
char* currencySymbols[] = {"USD", "Euro", "Yen", "INR", "Pound", "KWD", "CHF"};

// User input variables
int sourceCurrencyIndex, targetCurrencyIndex;
float amount;

// Array to store conversion history
ConversionRecord conversionHistory[MAX_HISTORY_SIZE];
int historySize = 0;

// Main program loop
while (true) {
    // Welcome message and instructions
    printf("\nWelcome to Currency Converter!\n");
    printf("Please select the source and target currencies and enter the amount to be converted.\n");

    // Selecting source currency
    printf("\nSelect source currency:\n");
    for (int i = 0; i < 7; ++i) {
        printf("%d. %s\n", i, currencySymbols[i]);
    }
    printf("Enter choice (0-6): ");
    scanf("%d", &sourceCurrencyIndex);

    // Selecting target currency
    printf("\nSelect target currency:\n");
    for (int i = 0; i < 7; ++i) {
        printf("%d. %s\n", i, currencySymbols[i]);
    }
    printf("Enter choice (0-6): ");
    scanf("%d", &targetCurrencyIndex);

    // Entering amount to be converted
    printf("\nEnter amount: ");
    scanf("%f", &amount);

    // Validating user inputs
    if (sourceCurrencyIndex < 0 || sourceCurrencyIndex > 6 || targetCurrencyIndex < 0 || targetCurrencyIndex > 6) {
        printf("\nInvalid currency selection.\n");
        continue;
    }

    if (amount <= 0) {
        printf("\nInvalid amount entered.\n");
        continue;
    }

     float convertedAmount = performConversion(amount, exchangeRates[targetCurrencyIndex] / exchangeRates[sourceCurrencyIndex]);

// Displaying the converted amount
printf("\n%.2f %s is equal to %.2f %s\n", amount, currencySymbols[targetCurrencyIndex], convertedAmount, currencySymbols[sourceCurrencyIndex]);


    // Storing the conversion in history
    if (historySize < MAX_HISTORY_SIZE) {
        ConversionRecord newRecord = {amount, sourceCurrencyIndex, targetCurrencyIndex, convertedAmount};
        conversionHistory[historySize++] = newRecord;
    } else {
        // If history is full, remove the oldest entry
        for (int i = 1; i < MAX_HISTORY_SIZE; ++i) {
            conversionHistory[i - 1] = conversionHistory[i];
        }
        // Add the new conversion at the end
        ConversionRecord newRecord = {amount, sourceCurrencyIndex, targetCurrencyIndex, convertedAmount};
        conversionHistory[MAX_HISTORY_SIZE - 1] = newRecord;
    }

    // Displaying conversion history
    printf("\nConversion History:\n");
    for (int i = 0; i < historySize; ++i) {
        printf("%.2f %s -> %.2f %s\n", conversionHistory[i].originalAmount, 
                                       currencySymbols[conversionHistory[i].sourceCurrencyIndex], 
                                       conversionHistory[i].convertedAmount, 
                                       currencySymbols[conversionHistory[i].targetCurrencyIndex]);
    }

    // Asking if the user wants to perform another conversion
    char choice;
    printf("\nDo you want to perform another conversion? (y/n): ");
    scanf(" %c", &choice);

    // Checking user's choice to continue or exit
    if (choice != 'y' && choice != 'Y') {
        break;
    }
}

// Thank you message
printf("\nThank you for using Currency Converter!\n");

// End of program
return 0;
