//Створіть масив з 10 цілих чисел.
//Заповніть масив випадковими числами або дозвольте користувачеві ввести числа.
//Знайдіть максимальне та мінімальне значення в масиві.
//Виведіть максимальне, мінімальне значення та весь масив на екран.


#include <iostream>

using namespace std;


// Выводит максимальное число из массива
int maxArr(int *arr, int arr_size) {
    int max = arr[0];
    for (int i = 1; i < arr_size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


// Выводит минимальное число из массива
int minArr(int *arr, int arr_size) {
    int min = arr[0];
    for (int i = 1; i < arr_size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}


int main() {
    int arr_size = 5;
    int arr[arr_size] = {1, 2, 3, 4, 5};

    int choice;
    cout << "Варианты: \n 1: MaxArr \n 2: MaxArr";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "gg" << maxArr(arr, arr_size) << endl;
            break;
        case 2:
            cout << " gg" << minArr(arr, arr_size) << endl;

        default:
            break;
    }
    return 0;
}
