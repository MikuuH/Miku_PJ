
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
void printStructData(const T& structObject, FieldType T::* field) {
    cout << structObject.*field;
};


int main() {
    cout << "И снова приветик! Тебя приветствует Айми.. Я думаю, ты помнишь меня! Мы с тобой совсем недавно виделись. Что же, прими новое домашнее задание от @MikuSv0!" << endl << endl;

    Car car("modelY", 123);
    printStructData(car, &Car::model);
    return 0;
}