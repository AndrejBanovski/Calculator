#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

void showMenu() {
    cout << "\n=============================\n";
    cout << "       SIMPLE CALCULATOR\n";
    cout << "=============================\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Power (x^y)\n";
    cout << "6. Square Root (√x)\n";
    cout << "7. Modulus (%)\n";
    cout << "8. View History\n";
    cout << "9. Exit\n";
    cout << "=============================\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    vector<string> history;

    do {
        showMenu();
        cin >> choice;

        double a, b, result;
        string record;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                result = a + b;
                cout << "Result: " << result << endl;
                record = to_string(a) + " + " + to_string(b) + " = " + to_string(result);
                history.push_back(record);
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                result = a - b;
                cout << "Result: " << result << endl;
                record = to_string(a) + " - " + to_string(b) + " = " + to_string(result);
                history.push_back(record);
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                result = a * b;
                cout << "Result: " << result << endl;
                record = to_string(a) + " * " + to_string(b) + " = " + to_string(result);
                history.push_back(record);
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                if (b != 0) {
                    result = a / b;
                    cout << "Result: " << result << endl;
                    record = to_string(a) + " / " + to_string(b) + " = " + to_string(result);
                    history.push_back(record);
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;

            case 5:
                cout << "Enter base and exponent: ";
                cin >> a >> b;
                result = pow(a, b);
                cout << "Result: " << result << endl;
                record = to_string(a) + "^" + to_string(b) + " = " + to_string(result);
                history.push_back(record);
                break;

            case 6:
                cout << "Enter a number: ";
                cin >> a;
                if (a >= 0) {
                    result = sqrt(a);
                    cout << "Result: " << result << endl;
                    record = "sqrt(" + to_string(a) + ") = " + to_string(result);
                    history.push_back(record);
                } else {
                    cout << "Error: Cannot take sqrt of negative number!" << endl;
                }
                break;

            case 7:
                cout << "Enter two integers: ";
                int x, y;
                cin >> x >> y;
                if (y != 0) {
                    cout << "Result: " << (x % y) << endl;
                    record = to_string(x) + " % " + to_string(y) + " = " + to_string(x % y);
                    history.push_back(record);
                } else {
                    cout << "Error: Modulus by zero!" << endl;
                }
                break;

            case 8:
                cout << "\n--- History ---\n";
                if (history.empty()) {
                    cout << "No operations yet.\n";
                } else {
                    for (int i = 0; i < history.size(); i++) {
                        cout << i + 1 << ". " << history[i] << endl;
                    }
                }
                break;

            case 9:
                cout << "Exiting... Thank you for using Simple Calculator!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 9);

    return 0;
}
