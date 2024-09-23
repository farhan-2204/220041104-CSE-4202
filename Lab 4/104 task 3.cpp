#include <iostream>
#include <string>

using namespace std;

class BankAccount{
private:
    int number;
    string name;
    string type;
    float currentBalance;
    const int minimumBalance = 10000;

public:
    static int tot_cnt;
    static int curr_cnt;
    static float tot_tax;

    BankAccount(){
        tot_cnt++;
        number = 1234;
        name = "Mr. X";
        type = "Savings";
        currentBalance = 0;
    }

    ~BankAccount(){
        cout<<"Account of "<<name<<" with account no "<<number<<" is destroyed with a balance BDT "<<currentBalance<<endl;
        curr_cnt--;
    }

    void getInfo(){
        int _number;
        string _name;
        string _type;
        cout<<"Account no: ";
        cin>>_number;
        cout<<"Name: ";
        cin>>_name;
        cout<<"Account type(Please Type 'Current' or 'Savings'): ";
        cin>>_type;

        if(!(_type == "Savings" || _type == "Current")){
            cout<<"Invalid Account Type"<<endl;
            return;
        }

        name = _name;
        number = _number;
        type = _type;

        curr_cnt++;
    }

    void showBalance(){
        cout<<"Current Balance: "<<currentBalance<<endl;
    }

    void deposit(float amount){
        currentBalance += amount;
    }

    int withdrawal(float amount){
        if(amount > currentBalance){
            cout<<"Not enough balance!";
            return 0;
        }

        currentBalance -= amount;
        return amount;
    }

    void giveInterest(){
        float x = currentBalance*.03;
        tot_tax += x*.1;
        x -= (x*.1);
        currentBalance += x;
    }

    float getCurrentBalance() const{
        return currentBalance;
    }
};

int BankAccount::tot_cnt = 0;
int BankAccount::curr_cnt = 0;
float BankAccount::tot_tax = 0;

void display_stat(){
    int x = BankAccount::tot_cnt;
    int y = BankAccount::curr_cnt;
    float total = BankAccount::tot_tax;

    cout<<"Total Bank Accounts created: "<<x<<endl;
    cout<<"Total Bank Accounts present: "<<y<<endl;
    cout<<"Total tax collected: "<<total<<endl;
}

BankAccount Larger(const BankAccount A,const BankAccount B){
    if(A.getCurrentBalance() > B.getCurrentBalance())
        return A;
    return B;
}

int main()
{
    BankAccount b1, b2;
    b1.getInfo();
    b1.deposit(15000);
    display_stat();

    return 0;
}
