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
    account* myAccount;

    string name = "gg";
    string surname = "gg";
    double balance = 45;
    int cardNumber = 5743664565567676;

    int cout = 1;


    // 0 - создаем аккаунт
    // 1 - баланс
    //  2 - добавить денег
    // 3 - перевести деньги
    // 4 - смена номера карты

    if (cout = 0) {
        myAccount = new account(name, surname, balance, cardNumber);

    }
    else if (cout = 1) {
        myAccount->infoAccountPublic();
    }
    else if (cout = 2)
    {
        /* code */
    }
    



    // Освобождаем память
    delete myAccount;

    return 0;
}