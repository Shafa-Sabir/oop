
#include <iostream>
#include <vector>
#include<string>

using namespace std;

class BankAccount {
private:
    int accountNumber;
    string ownerName;
    double balance;
    vector<string> transactionHistory;
    static int nextAccountNumber;


public:
    //  Default Constructor
    BankAccount() {
        accountNumber = nextAccountNumber++;
        ownerName = "Unknown";
        balance = 0.0;
        cout << " New account created! Account No: " << accountNumber << endl;
    }

    //  Parameterized Constructor
    BankAccount(string name, double initialBalance) {
        accountNumber = nextAccountNumber++;
        ownerName = name;
        balance = initialBalance;
        transactionHistory.push_back(
            "Account opened with Rs." + to_string(initialBalance) + " on ");
        cout << " Account created for " << ownerName 
             << " | Account No: " << accountNumber << endl;
    }

    //  Copy Constructor — new account number generate hoga
    BankAccount(const BankAccount& other) {
        accountNumber = nextAccountNumber++;  // New unique number
        ownerName = other.ownerName + " (Copy)";
        balance = other.balance;
        transactionHistory = other.transactionHistory;
        transactionHistory.push_back(
            "Account copied from Account No." + to_string(other.accountNumber) 
            + " on " );
        cout << " Account copied! New Account No: " << accountNumber << endl;
    }

    //  Deposit Method
    void deposit(double amount) {
        if (amount <= 0) {
            cout << " Invalid deposit amount!" << endl;
            return;
        }
        balance += amount;
        transactionHistory.push_back(
            "DEPOSIT  | Rs." + to_string(amount) + 
            " | Balance: Rs." + to_string(balance) + 
            " | " );
        
        cout << "Deposited Rs." << amount 
             << " | New Balance: Rs." << balance << endl;
    }

    //  Withdraw Method
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << " Invalid withdrawal amount!" << endl;
            return;
        }
        if (amount > balance) {
            cout << " Insufficient balance! Available: Rs." << balance << endl;
            transactionHistory.push_back(
                "FAILED WITHDRAWAL | Rs." + to_string(amount) + 
                " | " 
            );
            return;
        }
        balance -= amount;
        transactionHistory.push_back(
            "WITHDRAW | Rs." + to_string(amount) + 
            " | Balance: Rs." + to_string(balance) + 
            " | " 
        );
        cout << " Withdrawn Rs." << amount 
             << " | Remaining Balance: Rs." << balance << endl;
    }

    //  Get Statement
    void getStatement() {
        cout << "\n========================================" << endl;
        cout << "       ACCOUNT STATEMENT" << endl;
        cout << "========================================" << endl;
        cout << "Account No : " << accountNumber << endl;
        cout << "Owner      : " << ownerName << endl;
        cout << "Balance  " << balance << endl;
        cout << "----------------------------------------" << endl;
        cout << "Transaction History:" << endl;
        for (int i = 0; i < transactionHistory.size(); i++) {
            cout << i + 1 << ". " << transactionHistory[i] << endl;
        }
        cout << "========================================\n" << endl;
    }

    //  Getters
    int getAccountNumber()
     { return accountNumber;
     }
     
    double getBalance()    
     { return balance;
     }

    string getOwnerName()  
     { return ownerName;
     }

    //  Destructor
    ~BankAccount() {
        cout << "\n Account No. " << accountNumber 
             << " (" << ownerName << ") has been closed." << endl;
    }
};

// Static member initialize
int BankAccount::nextAccountNumber = 1001;


// ===================== MAIN =====================
int main() {

    cout << "======= CREATING ACCOUNTS =======\n" << endl;
    BankAccount acc1("Ali Hassan", 5000.0);
    BankAccount acc2("Sara Khan", 10000.0);
    BankAccount acc3; // Default

    cout << "\n======= TRANSACTIONS =======\n" << endl;
    acc1.deposit(2000);
    acc1.withdraw(1500);
    acc1.withdraw(10000); // Should fail
    acc1.deposit(-500);   // Invalid

    cout << "\n======= STATEMENT =======";
    acc1.getStatement();

    cout << "======= COPY CONSTRUCTOR =======\n" << endl;
    BankAccount acc4 = acc1; // Copy
    acc4.deposit(3000);
    acc4.getStatement();

    cout << "======= SARA'S TRANSACTIONS =======\n" << endl;
    acc2.deposit(5000);
    acc2.withdraw(3000);
    acc2.getStatement();

    cout << "\n======= PROGRAM ENDING (Destructors) =======\n" << endl;

    return 0;
}


