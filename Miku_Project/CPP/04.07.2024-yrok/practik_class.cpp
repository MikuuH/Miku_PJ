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
        string n, string s, int b, int c) {
            name = n;
            surname = s;
            balance = b;
            cardNumber = c;
    };

    void infoAccountPublic() const {
        cout << "Name:" << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Balance: " << balance << endl;
        cout << "CardNumber: " << cardNumber << endl;
    }

    void infoAccountPrivate() const {
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
        if (b >= balance) {
            balance -= b;
            return true;
        } else {
            cout << "Don't you have anything to do? You don't have any money. Sit here and eat your lollipop!!!" << endl;
            return false;
        }
    }

    int editCardNumber(int newcard) {
        cardNumber = newcard;


    }
};

int main() {
    account* myAccount = nullptr;

    string name = "gg";
    string surname = "gg";
    double balanceCard = 45;
    int cardNumber = 55555;

    int choice = 0;
    do {
        if (choice == 0) {
            if (myAccount != nullptr) {
                int coutAccount;
                cout << "You already have an account. Are you sure you want to create a new one? 1 | 0" << endl;
                if (coutAccount == 1) {
                    myAccount = new account(name, surname, balanceCard, cardNumber);
                } else {
                    cout << "ok, a new account will not be created" << endl;
                }
            }
        }
        else if (choice == 1)
        {
            myAccount->infoAccountPublic();
        }
        else if (choice == 2) {
            cout << "Enter amount: ";
            cin >> balanceCard;
            myAccount->AddBalance(balanceCard);
        }
        else if (choice == 3)
        {
            cout << "enter how much money you want to transfer: " << endl;
            cout << "number of the card you want to transfer to: " << endl;
            cin >> balanceCard;
            int transfer = myAccount->moneyTransfer(balanceCard);

            if (transfer) {
                cout << "the money was successfully transferred" << endl;
            }
        }
        else if (choice == 4)
        {
            string newcard;
            cout << "enter new number curd. Enter 5 numbers" << endl;
            if (newcard.length() <= 5) {
                cout << "NONONONOONONNO IS NOT 5 LENGHT BRAT" << endl;
            } else {
                cin >> newcard;
                int newCardInt = stoi(newcard);
                myAccount->editCardNumber(newCardInt);
            }
        }
        else if (choice == 10)
        {
            cout << "GoodBye!" << endl;
        }
    } while (choice == 10);




    if (myAccount != nullptr) {
        myAccount->infoAccountPublic();
    }

    return 0;
}