#include <iostream>
#include <string>
using namespace std;

class bankAccount
{
private:
    string name;
    int account_number;
    int balance;
    int d_amount;
    int w_amount;

public:
    void setData(string n = "XYZ", int accNo = 0, int bal = 0, int dep = 0, int wit = 0)
    {
        name = n;
        account_number = accNo;
        balance = bal;
        d_amount = dep;
        w_amount = wit;
    }

    void deposit()
    {
        balance += d_amount;
        cout << "Your amount " << d_amount<< " is deposited and now your current balance is: " << balance << "\n";
    }

    void withDraw()
    {
        if (w_amount > 0 && w_amount <= balance)
        {
            balance -= w_amount;
            cout << "Your amount " << w_amount<< " is withdrawn and now your current balance is: " << balance << "\n";
        }
        else
        {
            cout << "Insufficient balance\n";
        }
    }

    void display()
    {
        cout << "Account holder's name: " << name << "\n";
        cout << "Account number: " << account_number << "\n";
        cout << "Account balance: " << balance << "\n";
    }
};

int main()
{
    string name;
    int account_number, balance, d_amount, w_amount;

    bankAccount B1;
    bankAccount B2;

    cout << "Enter Account holder's name:\n";
    cin >> name;

    cout << "Enter Account number:\n";
    cin >> account_number;

    cout << "Enter Account current balance:\n";
    cin >> balance;

    cout << "Enter deposit amount:\n";
    cin >> d_amount;

    cout << "Enter withdrawal amount:\n";
    cin >> w_amount;

    B1.setData(name, account_number, balance, d_amount, w_amount);
    B1.deposit();
    B1.withDraw();
    B1.display();

    cout << "\nB2 account details (default values):\n";
    B2.setData();
    B2.display();

    return 0;
}