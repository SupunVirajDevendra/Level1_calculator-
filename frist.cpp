#include <iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2;

    // Display a menu for user input
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    // Taking input of two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the operation based on user input
    switch(operation) {
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
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }

    return 0;
}
