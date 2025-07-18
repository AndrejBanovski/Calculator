#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
        double num1, num2;
        char op;

        cout << "=== Simple Calculator ===" << endl;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> num2;

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
                    cout << "Error: Division by zero!" << endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
        }

        cout << "Do you want to calculate again? (y/n): ";
        cin >> choice;
        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using Simple Calculator!" << endl;
    return 0;
}
