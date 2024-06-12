#include <iostream>
using namespace std;




int main () {

    int age = 10;

    try
    {
        if (age < 18) {
            throw invalid_argument("тебе нет 18!");
        }
    }
    catch(const exception& e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}