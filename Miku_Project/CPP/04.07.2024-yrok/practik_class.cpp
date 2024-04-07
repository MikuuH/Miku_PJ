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

    void infoAccountPublic() {
        cout << "Name:" << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Balance: " << balance << endl;
    }

    void infoAccountPrivate() {
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


    if (choice == 1) {
        myAccount = new account(name, surname, balance, cardNumber);
    }
    else if (choice == 2) {
        cout << "Enter amount: ";
        cin >> balance;
        myAccount->AddBalance(balance);
    }
    else if (choice == 3)
    {
        /* code */
    }


    if (myAccount != nullptr) {
        myAccount->infoAccountPublic();
    }

    return 0;
}