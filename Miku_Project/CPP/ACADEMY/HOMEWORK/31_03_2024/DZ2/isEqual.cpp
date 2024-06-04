#include <iostream>
#include <string>

using namespace std;

struct Employee
{
    string member;
    int id;

    Employee(string m, int n) : member(m), id(n) {}
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

    Employee employee1("Муж бил жену", 123);
    Employee employee2("Я - ты - мы", 456);
    Employee employee3("хахахах!", 123);

    cout << "равно ли employee1 : employee2: "
         << (isEqual(employee1, employee2, &Employee::id) ? "оказывается равно" : "Не равно!") << endl;

    cout << "равно ли employee1 : employee3: "
         << (isEqual(employee1, employee3, &Employee::id) ? "оказывается равно" : "Не равно!") << endl;

    return 0;
}