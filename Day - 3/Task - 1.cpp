#include <iostream>

using namespace std;

int main() {
    // Declare three integer variables and pointers
    int a, b, c;
    int *p1 = &a, *p2 = &b, *p3 = &c;

    // Input values through pointers
    cout << "Enter value for a: ";
    cin >> *p1;

    cout << "Enter value for b: ";
    cin >> *p2;

    cout << "Enter value for c: ";
    cin >> *p3;

    // Calculate the sum and display results
    int sum = *p1 + *p2 + *p3;
    cout << "a: " << a << ", b: " << b << ", c: " << c << ", Sum: " << sum << endl;

    return 0;
}
