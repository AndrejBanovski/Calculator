#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cout << "==== КАЛКУЛАТОР ====\n";
    cout << "Внеси прв број: ";
    cin >> num1;
    cout << "Внеси оператор (+, -, *, /): ";
    cin >> op;
    cout << "Внеси втор број: ";
    cin >> num2;
    double result;
    switch(op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Грешка: делење со нула!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Невалиден оператор!" << endl;
            return 1;
    }
    cout << "Резултат: " << result << endl;
    return 0;
}
