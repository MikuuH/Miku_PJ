#include<iostream>
#include<string>

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

    account(string n, string s, int b, int c) : name(n), surname(s), balance(b), cardNumber(c) {}

    void infoAccountPublic() {
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Balance: " << balance << endl;
        cout << "CardNumber: " << cardNumber << endl;
    }

    void infoAccountPrivate() {
        cout << "dateOfBirth: " << dateOfBirth << endl;
        cout << "inn: " << inn << endl;
        cout << "cvv: " << cvv << endl;
        cout << "term: " << term << endl;
        cout << "isLoan: " << isLoan << endl;
        cout << "IsBlocked: " << IsBlocked << endl;
    }

    void AddBalance(int b) {
        balance += b;
    }

    void minusBalance(int b) {
        balance -= b;
    }

    bool moneyTransfer(double b) {
        if (b <= balance) { 
            balance -= b;
            return true;
        } else {
            cout << "Insufficient funds" << endl;
            return false;
        }
    }

    int editCardNumber(int newcard) {
        cardNumber = newcard;
        return cardNumber;
    }
};

int main() {
    string name = "gg";
    string surname = "gg";
    double balanceCard = 45;
    int cardNumber = 55555;
    account* myAccount;


    int choice;
    while (true) {
        cout << "please enter choice: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 0: {
            if (myAccount != nullptr) {
                int coutAccount;
                cout << "You already have an account. Are you sure you want to create a new one? 1 | 0" << endl;
                cin >> coutAccount; 
                if (coutAccount == 1) {
                    myAccount = new account(name, surname, balanceCard, cardNumber);
                } else {
                    cout << "ok, a new account will not be created" << endl;
                }
            }
        }
        case 1: {
            if (myAccount != nullptr) {
                myAccount->infoAccountPublic();
            } else {
                cout << "You don't have an account." << endl;
            }
        }
        case 2: {
            if (myAccount != nullptr) {
                cout << "Enter amount: ";
                cin >> balanceCard;
                myAccount->AddBalance(balanceCard);
            } else {
                cout << "You don't have an account." << endl;
            }
        }
        case 3: {
            if (myAccount != nullptr) {
                cout << "Enter amount to transfer: ";
                cin >> balanceCard;
                bool transfer = myAccount->moneyTransfer(balanceCard);
                if (transfer) {
                    cout << "The money was successfully transferred." << endl;
                }
            } else {
                cout << "You don't have an account." << endl;
            }
        }
        case 4: {
            if (myAccount != nullptr) {
                string newcard;
                cout << "Enter new card number (5 digits): ";
                cin >> newcard;
                if (newcard.length() != 5) {
                    cout << "Invalid card number length." << endl;
                } else {
                    int newCardInt = stoi(newcard);
                    myAccount->editCardNumber(newCardInt);
                }
            } else {
                cout << "You don't have an account." << endl;
            }
        }
        case 10: {
            cout << "GoodBye!" << endl;
            break;
        }
    }
    }

    return 0;
}
