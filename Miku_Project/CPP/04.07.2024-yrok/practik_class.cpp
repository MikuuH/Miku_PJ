#include<iostream>

using namespace std;

class account {
    private:
        int dateOfBirth;
        int inn;
        int cvv;
        int term;
        string isLoan = "no";
        string IsBlocked = "no";

    public:
        string name;
        string surname;
        int balance = 0;
        int cardNumber;

        account(
        string name, string surname, int balance, int cardNumber) {
            name = name;
            surname = surname;
            balance = balance;
            cardNumber = cardNumber;
    };

    void infoAccountPublic() const {
        cout << "Name:" << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Balance: " << balance << endl;
    }

    void infoAccountPrivate() const {
        cout << "dateOfBirth: " << dateOfBirth << endl;
        cout << "inn: " << inn << endl;
        cout << "cvv: " << cvv << endl;
        cout << "term: " << term << endl;
        cout << "isLoan: " << isLoan << endl;
        cout << "IsBlocked: " << IsBlocked << endl;
    }

    void AddBalance(int amout) {
        balance += amout;
    }

    void minusBalance(int amout) {
        balance -= amout;
    }

    bool moneyTransfer(double amout){
        if (amout <= balance) {
            balance -= amout;
            return true;
        } else {
            cout << "Don't you have anything to do? You don't have any money. Sit here and eat your lollipop!!!" << endl;
            return false;
        }
    }
};

int main() {
    account* myAccount = nullptr;

    string name = "gg";
    string surname = "gg";
    double balance = 45;
    int cardNumber = 5743664565567676;

    int choice;

    // 0 - создаем аккаунт
    // 1 - баланс
    //  2 - добавить денег
    // 3 - перевести деньги
    // 4 - смена номера карты


    if (choice == 0) {
        myAccount = new account(name, surname, balance, cardNumber);
    }
    else if (choice == 1)
    {
        myAccount->infoAccountPublic();
    }
    else if (choice == 2) {
        cout << "Enter amount: ";
        cin >> balance;
        myAccount->AddBalance(balance);
    }
    else if (choice == 3)
    {
        cout << "enter how much money you want to transfer: " << endl;
        cout << "number of the card you want to transfer to: " << endl;
        cin >> balance;
        int transfer = myAccount->moneyTransfer(balance);

        if (transfer) {
            cout << "the money was successfully transferred" << endl;
        }
    }
    else if (choice == 4)
    {
        /* code */
    }



    if (myAccount != nullptr) {
        myAccount->infoAccountPublic();
    }

    return 0;
}