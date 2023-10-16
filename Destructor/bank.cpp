#include <iostream>
using namespace std;
class bankaccount
{
    int acno;
    float bal;

public:
    bankaccount(int acc_no, float Balance)
    {
        acno = acc_no;
        bal = Balance;
    }
    void deposit();
    void withdraw();
    void show();

~bankaccount()
    {
        cout<<"Thank you";
    }
};

void bankaccount::deposit()
{
    int DepositAmmount1;
    cout << " Enter Deposit Amount = " << endl;
    cin >> DepositAmmount1;

    bal = bal + DepositAmmount1;
    cout << "Total Balance of account :" << bal << endl;

}

void bankaccount::withdraw()
{
    int WithdrawAmmount1;

    cout << "Enter your withdraw_amount= ";
    cin >> WithdrawAmmount1;
    
        if (bal < WithdrawAmmount1)
        {
            cout << "you have not sufficient amount";
            
        }
        else if (WithdrawAmmount1 <= bal)
        {
            bal = bal - WithdrawAmmount1;
            cout << "Present amount in your account= " << bal << endl;
        }
}

void bankaccount::show()
{
    cout << " *************" << endl;
    cout << " Accout No. : " << acno;
    cout << " Balance : " << bal<<endl;
}



int main()
{
    int acc_no;
    float Balance = 1000;

    cout << " Accout No. " << endl;
    cin >> acc_no;

    bankaccount bank(acc_no, Balance);
    bank.deposit();
    bank.withdraw();
    bank.show();

    return 0;
}