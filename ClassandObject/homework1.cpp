#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accNum;
    string name;
    int balance;
    int deposit;
    int withdraw;

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
    void setDeposit(int nDeposit)
    {
        deposit = nDeposit;
    };
    int getDeposite()
    {
        return deposit;
    }
    void setWithdraw(int nWithdraw)
    {
        withdraw = nWithdraw;
    };
    int getWithdraw()
    {
        return withdraw;
    }
};

int main()
{
    BankAccount account;
    int accNum;
    string name;
    int deposite;
    int withdraw;
    cout << "Enter account number :";
    cin >> accNum;
    account.setAccNum(accNum);
    cout << "Enter holder name :";
    cin >> name;
    account.setName(name);
    account.setBalance(0);
    cout << "Initial Account Information :" << endl;
    cout << "-----------------------------" << endl;
    cout << "Account Number :" << account.getAccNum() << endl;
    cout << "Account Holder's name :" << account.getName() << endl;
    cout << "Account balance : $" << account.getBalance() << endl;
    cout << "-----------------------------" << endl;
    cout << "How much to deposit :";
    cin >> deposite;
    account.setDeposit(deposite);
    cout << "How much to withdraw :";
    cin >> withdraw;
    account.setWithdraw(withdraw);
    if (account.getWithdraw() > account.getDeposite())
    {
        cout << "Insufficient balance for withdrawl!" << endl;
    }
    else
    {
        cout << "Withdraw successfully!" << endl;
    }
    cout << "Upadate account information :" << endl;
    cout << "-----------------------------" << endl;
    cout << "Account Number :" << account.getAccNum() << endl;
    cout << "Account Holder's name :" << account.getName() << endl;
    cout << "Account balance : $" << account.getDeposite() - account.getWithdraw() << endl;
    return 0;
}