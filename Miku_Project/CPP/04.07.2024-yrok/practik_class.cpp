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
    string name = "gg";
    string surname = "gg";
    int balance = 45;
    int cardNumber = 5743664565567676;

    int cout = 1;


    // Создаем объект класса account
    account* myAccount = new account(name, surname, balance, cardNumber);

    // 1 - баланс
    // 
    //
    //


    if (cout = 1) {
        myAccount->infoAccountPublic();
    } else if (cout = 2)
    {
        /* code */
    }
    



    // Освобождаем память
    delete myAccount;

    return 0;
}