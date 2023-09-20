#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Welcome to the Basic Calculator!" << endl;
    
    // Input the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Input the arithmetic operation
    cout << "Enter an operation (+ for addition, - for subtraction, * for multiplication, / for division): ";
    cin >> operation;

    // Input the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform the selected operation and display the result
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation. Please enter +, -, *, or /." << endl;
            break;
    }

    return 0;
}
