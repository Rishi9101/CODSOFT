
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    char choice;

    cout << "Basic Calculator\n";

    do {
        // Input numbers and operator
        cout << "\nEnter the first number: ";
        cin >> num1;

        cout << "Enter an operator (+, -, *, /): ";
        cin >> op;

        cout << "Enter the second number: ";
        cin >> num2;

        // Perform calculation
        switch (op) {
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
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero is not allowed.\n";
                break;
            default:
                cout << "Invalid operator entered.\n";
        }

        // Ask if user wants to calculate again
        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the calculator.\n";
    return 0;
}