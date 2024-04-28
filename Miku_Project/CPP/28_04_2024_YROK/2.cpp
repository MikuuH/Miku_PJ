// Створіть програму, яка використовує вектор для зберігання ряду чисел.Користувач вводить числа до тих пір,
// поки не введе негативне число.Потім програма повинна вивести всі введені числа назад у вигляді, зворотньому до порядку введення.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> dynamicArray;
    int number;

    cout << "Введите номер. Для выхода: 0" << endl;
    while (true)
    {
        cin >> number;
        if (number == 0) {
            break;
        }
        dynamicArray.push_back(number);
    }

    cout << "Элементы в обратном порядке: ";
    for (int i = dynamicArray.size() - 1; i >= 0; i--) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    return 0;
}