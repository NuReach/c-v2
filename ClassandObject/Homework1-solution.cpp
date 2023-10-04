#include <iostream>
using namespace std;
#include <vector>

class BankAccount
{
private:
    int accNum;
    string name;
    double balance = 0.00;

public:
    void setName(string nName)
    {
        name = nName;
    };
    string getName()
    {
        return name;
    }
    void setAccNum(int nAccNum)
    {
        accNum = nAccNum;
    };
    int getAccNum()
    {
        return accNum;
    }
    void setBalance(int nBalance)
    {
        balance = nBalance;
    };
    int getBalance()
    {
        return balance;
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
            cout << "Insufficient balance for withdrawl!" << endl;
        }
    }
    void display()
    {
        cout << "-----------------------------" << endl;
        cout << "Account Number :" << accNum << endl;
        cout << "Account Holder's name :" << name << endl;
        cout << "Account balance : $" << balance << endl;
        cout << "-----------------------------" << endl;
    }
};

int main()
{
    BankAccount account1;
    int accNum;
    string name;
    int deposite;
    int withdraw;
    BankAccount accList[3];
    for (int i = 0; i < size(accList); i++)
    {
        cout << "Enter account number :";
        cin >> accNum;
        accList[i].setAccNum(accNum);
        cout << "Enter holder name :";
        cin >> name;
        accList[i].setName(name);
    }

    cout << "Initial Account Information :" << endl;

    for (int i = 0; i < size(accList); i++)
    {
        cout << "-----------------------------" << endl;
        cout << "Account Number :" << accList[i].getAccNum() << endl;
        cout << "Account Holder's name :" << accList[i].getName() << endl;
    }

    // account1.display();
    //
    cout << "How much to deposite :";
    cin >> deposite;
    account1.deposit(deposite);
    cout << "How much to withdraw :";
    cin >> withdraw;
    account1.withdraw(withdraw);
    cout << "Upadate account information :" << endl;
    account1.display();
    return 0;
}