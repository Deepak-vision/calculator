# simple calculator

#include <iostream>
using namespace std;

void displayMenu() {
    cout << "Simple Calculator\n";
    cout << "-----------------\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    double num1, num2, result;

   do {
        displayMenu();
        cin >> choice;

  if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

  switch(choice) {
            case 1:
                result = num1 + num2;
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            case 5:
                cout << "Exiting calculator." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    cout << endl;
    } while(choice != 5);

  return 0;
}