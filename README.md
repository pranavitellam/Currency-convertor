 Currency Converter README
________________________________________
Introduction
This program is a simple currency converter implemented in C. It allows users to convert between seven different currencies based on predefined exchange rates. The program keeps track of conversion history and offers a user-friendly interface for easy interaction.
Files Included
•	currency_converter.c: The main C source code file containing the implementation of the currency converter program.
•	README.md: This readme file providing information about the program and its usage.
Compilation and Execution
To compile the program, you can use any C compiler such as GCC. For example:
gcc currency_converter.c -o currency_converter
To execute the program:
./currency_converter
Usage
1.	Upon running the program, the user is prompted to select the source and target currencies and enter the amount to be converted.
2.	After entering the required information, the program displays the converted amount and adds the conversion to the history.
3.	The user can choose to perform another conversion or exit the program.
Features
•	Supports conversion between seven different currencies.
•	Stores conversion history for up to 15 entries.
•	User-friendly interface with clear instructions.
•	Allows users to perform multiple conversions in a single session.
Limitations
•	Limited to predefined exchange rates.
•	Does not support real-time or dynamic exchange rate updates.
•	Conversion history is not persistent across program executions.

Currency Converter Report
________________________________________
Overview
The currency converter program is designed to provide users with a convenient tool for converting between different currencies. It offers a straightforward interface and incorporates essential features such as conversion history tracking.
Implementation Details
•	Exchange Rates: Predefined exchange rates for seven currencies are stored in an array within the program.
•	Conversion History: Conversion records are stored in a fixed-size array. When the history reaches its maximum capacity, the oldest entry is replaced by the newest one.
•	User Interface: The program guides users through the conversion process by presenting clear instructions and options for currency selection.
•	Validation: User inputs, such as currency indices and conversion amounts, are validated to ensure correctness and prevent errors.
Usage Scenario
Imagine a user who frequently travels internationally and needs to convert currencies for various expenses. They can use this program to quickly perform conversions without relying on external tools or services. The conversion history feature allows them to keep track of their previous transactions for reference.
Future Enhancements
Several enhancements can be made to improve the functionality and usability of the currency converter program:
1.	Dynamic Exchange Rates: Incorporate real-time or dynamic exchange rate updates to ensure accuracy.
2.	User Preferences: Allow users to set preferences such as default currencies or preferred exchange rates.
3.	Persistent History: Implement a mechanism to store conversion history persistently, possibly using file I/O or database storage.
4.	Additional Currencies: Expand the range of supported currencies to provide more flexibility for users.
Conclusion
The currency converter program offers a practical solution for users needing to perform currency conversions efficiently. With its intuitive interface and essential features, it serves as a handy tool for both occasional travelers and individuals dealing with international transactions regularly.
________________________________________
This report provides an overview of the currency converter program, detailing its implementation, features, usage scenario, potential enhancements, and conclusion.

