#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    // Input first number
    cout << "Enter first number: ";
    cin >> num1;

    // Input second number
    cout << "Enter second number: ";
    cin >> num2;

    // Input operation
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    // Perform calculation based on operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
            break;
    }

    return 0;
}