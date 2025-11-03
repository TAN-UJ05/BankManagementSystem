// Header files
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Account {
public:
    int accountNumber;
    string name;
    double balance;

    // Constructor
    Account(int accNum, string accName, double initialBalance) {
        accountNumber = accNum;
        name = accName;
        balance = initialBalance;
    }

    // Display account details
    void display() {
        cout << "\n-------------------------" << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Name : " << name << endl;
        cout << "Balance : $" << balance << endl;
        cout << "-------------------------" << endl;
    }
};

class Bank {
public:
    vector<Account> accounts;

    // Create a new account
    void createAccount() {
        int accNum;
        string accName;
        double deposit;

        cout << "Enter Account Number : ";
        cin >> accNum;
        cin.ignore();
        cout << "Enter Name : ";
        getline(cin, accName);
        cout << "Enter Initial Deposit : ";
        cin >> deposit;

        // Check if account already exists
        for (int i = 0; i < accounts.size(); i++) {
            if (accounts[i].accountNumber == accNum) {
                cout << "Account already exists!" << endl;
                return;
            }
        }

        // Add new account
        accounts.push_back(Account(accNum, accName, deposit));
        cout << "Account created successfully!\n";
    }

    // Display all accounts
    void displayAll() {
        if (accounts.empty()) {
            cout << "No accounts available.\n";
            return;
        }

        for (int i = 0; i < accounts.size(); i++) {
            accounts[i].display();
        }
    }

    // Deposit money
    void depositMoney() {
        int accNum;
        double amount;
        cout << "Enter Account Number: ";
        cin >> accNum;

        for (int i = 0; i < accounts.size(); i++) {
            if (accounts[i].accountNumber == accNum) {
                cout << "Enter Amount to Deposit: ";
                cin >> amount;
                if (amount > 0) {
                    accounts[i].balance += amount;
                    cout << "Deposited $" << amount << " successfully!\n";
                } else {
                    cout << "Invalid amount!\n";
                }
                return;
            }
        }
        cout << "Account not found!\n";
    }

    // Withdraw money
    void withdrawMoney() {
        int accNum;
        double amount;
        cout << "Enter Account Number: ";
        cin >> accNum;

        for (int i = 0; i < accounts.size(); i++) {
            if (accounts[i].accountNumber == accNum) {
                cout << "Enter Amount to Withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= accounts[i].balance) {
                    accounts[i].balance -= amount;
                    cout << "Withdrew $" << amount << " successfully!\n";
                } else if (amount > accounts[i].balance) {
                    cout << "Insufficient funds!\n";
                } else {
                    cout << "Invalid amount!\n";
                }
                return;
            }
        }
        cout << "Account not found!\n";
    }

    // Search account by number
    void searchAccount() {
        int accNum;
        cout << "Enter Account Number to Search: ";
        cin >> accNum;

        for (int i = 0; i < accounts.size(); i++) {
            if (accounts[i].accountNumber == accNum) {
                accounts[i].display();
                return;
            }
        }

        cout << "Account not found!\n";
    }
};

int main() {
    Bank bank;
    int choice;

    do {
        cout << "\n***** BANK MANAGEMENT SYSTEM *****\n";
        cout << "1. Create Account\n";
        cout << "2. Display All Accounts\n";
        cout << "3. Search Account\n";
        cout << "4. Deposit Money\n";
        cout << "5. Withdraw Money\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: bank.createAccount(); break;
            case 2: bank.displayAll(); break;
            case 3: bank.searchAccount(); break;
            case 4: bank.depositMoney(); break;
            case 5: bank.withdrawMoney(); break;
            case 6: cout << "Thank you for using the system!\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
