#include <iostream>
using namespace std;

int main() {
    double money = 500, newMoney;
    string password = "0000", newPassword, newPassword1, newPassword2, phoneNumber;
    int choice, counter = 0;
    char continueProgram;

    while (true) {
        cout << "Enter your password: ";
        cin >> newPassword;
        
        if (password == newPassword) {
            do {    
                system("clear");

                cout << endl;
                cout << "1. Withdraw money" << endl;
                cout << "2. View balance" << endl;
                cout << "3. Change password" << endl;
                cout << "4. View password" << endl;
                cout << "5. Enable SMS notification" << endl;
                cout << "6. Exit the program" << endl;

                cout << endl << "Choose an option: ";
                cin >> choice;

                switch (choice) {
                case 1:
                    cout << "How much would you like to withdraw? ";
                    cin >> newMoney;

                    if (newMoney > 0 && newMoney <= money) {
                        money -= newMoney;
                        cout << "Money withdrawn. Current balance: " << money << endl;
                    } else {
                        cout << "Invalid amount or insufficient funds." << endl;
                    }
                    break;

                case 2:
                    cout << "Your balance: " << money << endl;
                    break;

                case 3:
                    cout << "Enter current password: ";
                    cin >> newPassword;
                    cout << "Enter new password: ";
                    cin >> newPassword1;
                    cout << "Re-enter new password: ";
                    cin >> newPassword2;

                    if (password == newPassword && newPassword1 == newPassword2) {
                        password = newPassword1;
                        cout << "Password changed" << endl;
                    } else {
                        cout << "Error changing password" << endl;
                    }
                    break;

                case 4:
                    cout << "Password: " << password << endl;
                    break;

                case 5:
                    cout << "Enter your phone number: ";
                    cin >> phoneNumber;
                    cout << "SMS notification enabled" << endl;
                    break;

                case 6:
                    cout << "Program exited." << endl;
                    return 0;

                default:
                    cout << "Invalid choice." << endl;
                    break;
                }

                cout << "\nDo you want to continue? (Enter 'h' for yes): ";
                cin >> continueProgram;

            } while (continueProgram == 'h');

        } else {
            cout << "Incorrect password" << endl;
            counter += 1;

            if (counter == 3) {
                cout << "Card locked" << endl;
                return 0;
            }
        }
    }

    return 0;
}
