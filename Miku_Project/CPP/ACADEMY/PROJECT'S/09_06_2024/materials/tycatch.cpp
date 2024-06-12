#include <iostream>
using namespace std;




int main () {
    int number;
    int division;

    cout << "number: " << endl;
    cin >> number;

    cout << "division: " << endl;
    cin >> division;


    try
    {
        if (division == 0)
            throw runtime_error("Нельзя на ноль!");
        cout << "Result: " << number / division << endl;
    }
    catch(const exception& e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}