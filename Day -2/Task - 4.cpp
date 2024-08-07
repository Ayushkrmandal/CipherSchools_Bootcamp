#include <iostream>
#include <cmath>  // For sqrt() function
using namespace std;

// Function to return the square root of a number
double calculateSquareRoot(double number) {
    return sqrt(number);
}

// Function to return the square of a number
double calculateSquare(double number) {
    return number * number;
}

int main() {
    double number;
    int choice;

    // Input a number and choice for operation
    cout << "Enter a number: ";
    cin >> number;
    cout << "Choose an operation (1 for Square Root, 2 for Square): ";
    cin >> choice;

    // Perform the chosen operation and display the result
    if (choice == 1) {
        cout << "Square root: " << calculateSquareRoot(number) << endl;
    } else if (choice == 2) {
        cout << "Square: " << calculateSquare(number) << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
