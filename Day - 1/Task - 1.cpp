#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter expression: ";
    cin >> num1 >> op >> num2;

    if (op == '+') cout << num1 + num2;
    else if (op == '-') cout << num1 - num2;
    else if (op == '*') cout << num1 * num2;
    else if (op == '/' && num2 != 0) cout << num1 / num2;
    else if (op == '/' && num2 == 0) cout << "Error: Division by zero.";
    else if (op == '%' && static_cast<int>(num2) != 0) cout << static_cast<int>(num1) % static_cast<int>(num2);
    else if (op == '%' && static_cast<int>(num2) == 0) cout << "Error: Division by zero.";
    else cout << "Error: Invalid operator.";

    return 0;
}
