#include <iostream>
#include <string>


using namespace std; 


void convertAndPrint(const string& floatStr) {
    try {
        float result = stof(floatStr);
        cout << "Float: " << result << endl;
    }
    catch (const invalid_argument& e) {
        cerr << "Invalid argument: " << e.what() << endl;
    }
    catch (const out_of_range& e) {
        cerr << "Out of range: " << e.what() << endl;
    }
}

int main() {
    string floatStr = "3.14159";
    convertAndPrint(floatStr);

    return 0;
}
