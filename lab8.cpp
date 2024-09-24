// This program calculates the internet provider company customer's monthly bill.

#include <iostream> // Header file allowing the use of input/output objects.
#include <string>   // Header file allowing to work withstring class.
using namespace std;    // Use standard namespace.

int main()  // Main function is the starting point of the program execution.
{
    // Initialize the string objects for the messages that will be displayed to the user.
    string sBillAmountMessage = "This month's bill amount due is $";
    string sTimeRequest = "Enter the number of the internet access hours used: ";
    string sTimeErrorMessage = "Invalid hours. Please enter a value between 0 and 744.";

    const double fPackA = 9.95, fPackB = 14.95, fPackC = 29.95; // Initialize the cost for each package.
    double fHours, fBillAmount; // Declare the variables for the hours of internet access and the bill amount.
    char cChoice;   // Declare the variable for the choice of the package.

    // Request the customer's package choice and store input in cCHoice.
    cout << "Choose your internet provider package (A, B, or C): ";
    cin >> cChoice;

    // Make calculations for the bill amount depending on the customer's package choice.
    switch (cChoice)    // Switch statement allows to select one of the code blocks to be executed.
    {
        case 'A':   // Execute the following code block if the package choice is A.
            cout << sTimeRequest;   // Request the amount of internet access hours of the customer.
            cin >> fHours;

            // Check if the time input is invalid.
            if (fHours < 0.0 || fHours > 744.0)
            {
                cout << sTimeErrorMessage << endl;  // Display error message.
                return 1;  // Terminate the program and return 1 if the hours input is invalid in case A.
            }

            if (fHours <= 10.0) // If the number of hours doesn't exceed the limit, the bill amount is the package's price.
                cout << sBillAmountMessage << fPackA << endl;
            else    // If the number of hours exceeds the limit, calculate the bill amount.
            {
                fBillAmount = fPackA + (fHours - 10.0) * 2.0;
                cout << sBillAmountMessage << fBillAmount << endl;
            }
            break;  // End of code block execution for case A.

        case 'B':   // Execute the following code block if the package choice is B.
            cout << sTimeRequest;   // Request the amount of internet access hours of the customer.
            cin >> fHours;

            // Check if the time input is invalid.
            if (fHours < 0.0 || fHours > 744.0)
            {
                cout << sTimeErrorMessage << endl;  // Display error message.
                return 2;  // Terminate the program and return 2 if the hours input is invalid in case B.
            }
        
            if (fHours <= 20.0) // If the number of hours doesn't exceed the limit, the bill amount is the package's price.
                cout << sBillAmountMessage << fPackB << endl;
            else    // If the number of hours exceeds the limit, calculate the bill amount.
            {
                fBillAmount = fPackB + (fHours - 20.0) * 1.0;
                cout << sBillAmountMessage << fBillAmount << endl;
            }
            break;  // End of code block execution for case B.

        case 'C':   // Execute the following code block if the package choice is C.
            cout << sTimeRequest;   // Request the amount of internet access hours of the customer.
            cin >> fHours;

            // Check if the time input is invalid.
            if (fHours < 0.0 || fHours > 744.0)
            {
                cout << sTimeErrorMessage << endl;  // Display error message.
                return 3;  // Terminate the program and return 3 if the hours input is invalid in case C.
            }

            cout << sBillAmountMessage << fPackC << endl;   // The bill amount for the unlimited access package is the price of the package.
            break;  // End of code block execution for case C.

        default: // If none of the above cases are true, then the user's input was invalid.
            {
                cout << "Invalid choice. Please choose A, B, or C." << endl;    // Display the error message.
                return 4;   // Terminate the program and return 4 if the choice input was invalid.
            }
    }

    return 0;   // Return 0 to indicate successful completion of the program.
}
