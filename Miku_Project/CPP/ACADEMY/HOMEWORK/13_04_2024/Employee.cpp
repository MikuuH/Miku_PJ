#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
        string name;
        string post;
        double price;

        Employee(string nameEmployee, string postEmployee, double priceEmployee) {
            name = nameEmployee;
            post = postEmployee;
            price = priceEmployee;
    };

        void infoEmployeeName() {
            cout << "Name: " << name;
    };

        virtual void infoEmployeeFull() const {
            cout << "Name: " << name << endl;
            cout << "Post: " << post << endl;
            cout << "Price: " << price << endl;
    };
};


class Intern : public Employee {
    public:
        int periud;
        string mentor;

        Intern(int periud, string mentor, string nameEmployee, string postEmployee, double priceEmployee)
            : Employee(nameEmployee, postEmployee, priceEmployee), periud(periud), mentor(mentor) {}

        void infoEmployeeFull() const override {
            Employee::infoEmployeeFull();
            cout << "Periud: " << periud << endl;
            cout << "Mentor: " << mentor << endl;
    };
};


class Manager : public Intern {
    public:
        double bonus;

        Manager(double bonusPrice, int periud, string mentor, string nameEmployee, string postEmployee, double priceEmployee) 
            : Intern(periud, mentor, nameEmployee, postEmployee, priceEmployee), bonus(bonusPrice) {}

        void setBonusPrice() {
            cout << "Enter bonus for employee: " << Employee::name << endl;
            cin >> bonus;
    };

    void infoEmployeeFull () const override {
        Intern::infoEmployeeFull();
        cout << "bonus: " << bonus << endl;
    };
};


int main () {
    cout << "Hi! My name is Aimee! Translated from Japanese, it means 'beautiful love'.I got a wonderful homework assignment from @MikuSv0! Enjoy watching!";

    Manager manager(0.0, 31, "Сашко", "паша", "директор", 0.0);
    manager.setBonusPrice();
    manager.infoEmployeeFull();

    return 0;
}

