#include <iostream>
using namespace std;

int main() {
    int defaultPIN = 99999;
    int userPIN = 0;
    double balance = 0;
    int transactions[100];
    int choice;
    int transactionCount = 0;
    int max_attempts = 3;
    int amount = 0;
    int amount1 = 0;

    cout << "\t\t===ATM PROGRAM======" << endl;

    do {
        cout << "\t\t====Enter your pin====";
        cin >> userPIN;
        if (userPIN == defaultPIN) {
            cout << "\033[1;32m" << "PIN entered successfully!" << "\033[0m" << endl;

            do {
                cout << "\t\t1. Check balance" << endl;
                cout << "\t\t2. Deposit " << endl;
                cout << "\t\t3. Widthdraw" << endl;
                cout << "\t\t4. View transactions" << endl;
                cout << "\t\t5. Exit" << endl;
                cout << "\t\t Enter your choice_____ ";
                cin >> choice;
                switch (choice) {
                case 1:
                    cout << "Your balance is: " << balance << " Frw" << endl;
                    break;
                case 2: {
                    int amount = 0;
                    cout << "Enter an amount: ";
                    cin >> amount;
                    balance += amount;
                    transactions[transactionCount++] = amount;
                    cout << "You made a deposit of " << amount << " Frw successfully" << endl;
                    break;
                }
                case 3: {
                    cout << "Enter an amount: ";
                    cin >> amount1;
                    if (amount1 <= balance) {
                        balance -= amount1;
                        transactions[transactionCount++] = -amount1;
                        cout << "You withdrew " << amount1 << " Frw successfully" << endl;
                    }
                    else {
                        cout << "Insufficient funds!" << endl;
                    }
                    break;
                }
                case 4:
                    cout << "=== Transaction History ===" << endl;
                    if (transactionCount == 0) {
                        cout << "No transactions yet." << endl;
                    }
                    else {
                        for (int i = 0; i < transactionCount; i++) {
                            cout << i + 1 << ". " << transactions[i] << endl;
                        }
                    }
                    break;
                }

            } while (choice != 5);

        }
        else {
            cout << "Wrong PIN! Try again." << endl;
            max_attempts--;
            cout << "Attempts remaining: " << max_attempts << endl;
            cout << "\033[31m" << "You have " << max_attempts << " attempts remaining." << "\033[0m" << endl;
        }

    } while (userPIN != defaultPIN && max_attempts > 0);

    cout << "welcome to our ATM!" << "\033[34m" << endl;

    return 0;
}