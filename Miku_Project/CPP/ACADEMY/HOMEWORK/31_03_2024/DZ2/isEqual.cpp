#include <iostream>
#include <string>

using namespace std;

struct Car
{
    string model;
    int number;

    Car(string m, int n) : model(m), number(n) {}
};


template <typename T, typename FieldType>
bool isEqual(
    const T& structOne,
    const T& sructTwo,
    FieldType T::* field) {
        return structOne.*field == sructTwo.*field;
};


int main() {
    cout << "И снова приветик! Тебя приветствует Айми.. Я думаю, ты помнишь меня! Мы с тобой совсем недавно виделись. Что же, прими новое домашнее задание от @MikuSv0!" << endl << endl;

    Car car1("modelY", 123);
    Car car2("modelY", 456);
    Car car3("modelX", 123);

    cout << "равно ли кар1 : кар2"
         << (isEqual(car1, car2, &Car::model) ? "оказывается равно" : "Не равно!") << endl;

    cout << "равно ли кар1 : кар2"
         << (isEqual(car1, car2, &Car::number) ? "оказывается равно" : "Не равно!") << endl;

    cout << "равно ли кар1 : кар3"
         << (isEqual(car1, car3, &Car::number) ? "оказывается равно" : "Не равно!") << endl;

    return 0;
}