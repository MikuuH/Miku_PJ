





#include <iostream>
#include <string>

using namespace std;

// Возвращает наибольшее число
template <typename T>
T maxValue(T one, T two) {
    return (one > two) ? one : two;
}

// показывает все эелементы массива
template <typename T>
void printArray(T arr, T size_arr) {
    for (int i = 0; i < size_arr; i++) {
        cout << arr[i] << "";

    }
    return 0;
}

int main() {
    // // maxValue
    // cout << "maxValue: INT: " << maxValue<int>(1, 10) << endl;
    // cout << "maxValue: FLOAT: " << maxValue<float>(7.9, 1.9) << endl;
    // cout << "maxValue: CHAR: " << maxValue<string>("люблю", "МИКУ");

    int size_arr = 5;
    int arr[size_arr] = {1, 2, 3, 4, 5};
    cout << "printArray" << printArray(arr, size_arr) << endl;


    return 0;
}
