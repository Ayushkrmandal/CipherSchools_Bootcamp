#include <iostream>
using namespace std;

// Function to return the sum of three numbers
float sumOfThree(float num1, float num2, float num3) {
    return num1 + num2 + num3;
}

int main() {
    float num1, num2, num3;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Calculate the sum using the function
    float sum = sumOfThree(num1, num2, num3);

    // Output the result
    cout << "The sum of the three numbers is: " << sum << endl;

    return 0;
}
