#include <iostream>
#include <string>

using namespace std;


template <typename T>
T printArray(T* arrInp, T sizeInp) {
    for (int i = 0; i < sizeInp; i++) {
        cout << arrInp[i] << "" << endl;
    }
    return 0;
};


int main() {
    cout << "И снова приветик! Тебя приветствует Айми.. Я думаю, ты помнишь меня! Мы с тобой совсем недавно виделись. Что же, прими новое домашнее задание от @MikuSv0!" << endl << endl;

    int size_arr = 6;
    int arr[6] = {1, 2, 3, 4, 5};
    cout << "printArray" << printArray(arr, size_arr) << endl;
}