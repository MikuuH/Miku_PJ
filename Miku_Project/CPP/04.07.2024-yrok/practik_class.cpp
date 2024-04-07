#include<iostream>
#include<string>

using namespace std;


struct BIO {
    string name;
    string surname;
};

struct CardInfo {
    int cardNumber;
    int balance = 0;
    int cvv;
};

class Account {
private:
    int dateOfBirth;
    int inn;
    int term;
    string isLoan = "no";
    string IsBlocked = "no";

public:
    BIO bio;
    CardInfo cardInfo;

    Account(string n, string s, int b, int c, int cV) {
        bio.name = n;
        bio.surname = s;
        cardInfo.balance = b;
        cardInfo.cardNumber = c;
        cardInfo.cvv = cV;
    }

    void infoAccountPublic() {
        cout << "Name: " << bio.name << endl;
        cout << "Surname: " << bio.surname << endl;
        cout << "Balance: " << cardInfo.balance << endl;
        cout << "CardNumber: " << cardInfo.cardNumber << endl;
    }

    void AddBalance(int b) {
        cardInfo.balance += b;
    }

    void minusBalance(int b) {
        cardInfo.balance -= b;
    }

    bool moneyTransfer(double b) {
        if (b <= cardInfo.balance) { 
            cardInfo.balance -= b;
            return true;
        } else {
            cout << "Insufficient funds" << endl;
            return false;
        }
    }

    void editCardNumber(int newcard) {
        cardInfo.cardNumber = newcard;
    }
};

int main() {
    string name = "gg";
    string surname = "gg";
    double balanceCard = 45;
    int cardNumber = 55555;
    Account* myAccount = new Account(name, surname, balanceCard, cardNumber, 123);


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
            break;
        }
        case 1: {
            if (myAccount != nullptr) {
                myAccount->infoAccountPublic();
            } else {
                cout << "You don't have an account." << endl;
            }
            break;
        }
        case 2: {
            if (myAccount != nullptr) {
                cout << "Enter amount: ";
                cin >> balanceCard;
                myAccount->AddBalance(balanceCard);
            } else {
                cout << "You don't have an account." << endl;
            }
            break;
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
            break;
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
            break;
        }
        case 10: {
            cout << "GoodBye!" << endl;
            return 0;
        }
        case 11:
            delete myAccount;
            cout << "Account deleted!" << endl;
            break;
        }
    }


    return 0;
}
