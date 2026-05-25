#include <iostream>

using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string name, double bal) {
        owner = name;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful.\n";
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdraw successful.\n";
        } else {
            cout << "Not enough balance.\n";
        }
    }

    void showBalance() {
        cout << "Owner: " << owner << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc("Ali", 1000);

    acc.showBalance();

    acc.deposit(500);
    acc.withdraw(300);

    acc.showBalance();

    return 0;
}
