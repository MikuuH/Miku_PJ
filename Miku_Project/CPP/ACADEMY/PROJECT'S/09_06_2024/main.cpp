#include <iostream>
#include <stdexcept>

using namespace std;

void addNewUser(string name, int age) {
    try {
        if (name.size() < 3) {
            throw invalid_argument("имя меньше 3-х символов");
        } else if (name.size() > 50) {
            throw invalid_argument("Больше 50!");
        } else {
            cout << name << endl;
        }
    }
    catch(const invalid_argument& e) {
        cerr << e.what() << endl;
    }

    try {
        if (age < 18) {
            throw invalid_argument("меньше 18");
        } else if (age > 120) {
            throw invalid_argument("больше 120!");
        } else {
            cout << age << endl;
        }
    }
    catch(const invalid_argument& e) {
        cerr << e.what() << endl;
    }
}


int main() {
    addNewUser("lo", 5); // Имя и возраст соответствуют условиям

    return 0;
}
