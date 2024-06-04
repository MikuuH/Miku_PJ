#include <iostream>
#include <string>

using namespace std;


struct Product
{
    string name;
    double price;

    Product(string n, double p) : name(n), price(p) {}
};


template <typename T, typename FieldType>
void updateField(
    T& structObject,
    FieldType T::* field,
    FieldType newValue) {
        structObject.*field = newValue;
};


int main() {
    cout << "И снова приветик! Тебя приветствует Айми.. Я думаю, ты помнишь меня! Мы с тобой совсем недавно виделись. Что же, прими новое домашнее задание от @MikuSv0!" << endl << endl;

    Product product("Сухарики", 20.00);
    cout << product.name << endl;

    updateField(product, &Product::name, string("gg"));
    cout << product.name << endl;

    return 0;
}