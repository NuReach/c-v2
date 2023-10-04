
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BankAccount
{
private:
    int accNumber;
    string accHolderName;
    double balance;

public:
    BankAccount() = default;

    BankAccount(int accountNumber, string accountHolderName)
    {
        accNumber = accountNumber;
        accHolderName = accountHolderName;
        balance = 0.0;
    }

    int getAccNumber()
    {
        return accNumber;
    }

    string getAccHolderName()
    {
        return accHolderName;
    }

    double getBalance()
    {
        return balance;
    }

    void setBalance(double newBalance)
    {
        balance = newBalance;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "not enough balance" << endl;
        }
    }

    void displayAccountInfo()
    {
        cout << "Account Number: " << accNumber << endl;
        cout << "Account Holder Name: " << accHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

void displayMenu()
{
    cout << "Welcom to ABC Bank" << endl;
    cout << "<1> Open Account" << endl;
    cout << "<2> Deposit" << endl;
    cout << "<3> Withdraw" << endl;
    cout << "<4> Account Inquiry" << endl;
    cout << "<5> Exit" << endl;
    cout << "-------------------------" << endl;
}

void openAccount(vector<BankAccount> &bank)
{
    int accountNumber;
    string accountHolderName;
    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter account holder name: ";
    cin >> accountHolderName;
    BankAccount account(accountNumber, accountHolderName);
    bank.push_back(account);
    cout << "Account created successfully." << endl;
}

void deposit(vector<BankAccount> &bank)
{
    int accountNumber;
    double amount;
    cout << "****Desposit****" << endl;
    cout << "Enter account number: ";
    cin >> accountNumber;
    for (auto &account : bank)
    {
        if (account.getAccNumber() == accountNumber)
        {
            cout << "Enter deposit amount: $";
            cin >> amount;
            account.deposit(amount);
            cout << "Deposit successfully!" << endl;
        }
    }
    cout << "account not found" << endl;
}

void withdraw(vector<BankAccount> &bank)
{
    int accountNumber;
    double amount;
    cout << "****Withdraw****" << endl;
    cout << "Enter account number: ";
    cin >> accountNumber;
    for (auto &account : bank)
    {
        if (account.getAccNumber() == accountNumber)
        {
            cout << "Enter withdrawal amount: $";
            cin >> amount;
            account.withdraw(amount);
        }
    }
    cout << "account not found" << endl;
}

void inquiryBalance(vector<BankAccount> &bank)
{
    int accountNumber;
    cout << "****Balance Enquiry****" << endl;
    cout << "Enter account number: ";
    cin >> accountNumber;

    for (auto &account : bank)
    {
        if (account.getAccNumber() == accountNumber)
        {
            account.displayAccountInfo();
        }
    }
    cout << "account not found" << endl;
}

int main()
{
    vector<BankAccount> bank;
    int choice = 1;
    while (choice != 0)
    {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            openAccount(bank);
            break;

        case 2:
            deposit(bank);
            break;

        case 3:
            withdraw(bank);
            break;

        case 4:
            inquiryBalance(bank);
            break;

        case 0:
            cout << "exiting. bye!" << endl;
            break;

        default:
            break;
        }
    }

    return 0;
}