#include <iostream>
#include <string>

using namespace std;


// Возвращает наибольшее число
template <typename T>
T maxValue(T one, T two) {
    return (one > two) ? one : two;
}


int main() {
    cout << "И снова приветик! Тебя приветствует Айми.. Я думаю, ты помнишь меня! Мы с тобой совсем недавно виделись. Что же, прими новое домашнее задание от @MikuSv0!" << endl << endl;

    cout << "maxValue: INT: " << maxValue<int>(1, 10) << endl;
    cout << "maxValue: FLOAT: " << maxValue<float>(7.9, 1.9) << endl;
    cout << "maxValue: CHAR: " << maxValue<string>("люблю", "МИКУ");

    return 0;
}
