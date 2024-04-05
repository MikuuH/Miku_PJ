#include <iostream>

using namespace std;

int main() {
    const int arraySize = 10;
    int array[arraySize];
    cout << "Введите " << arraySize << " целых чисел для заполнения массива:" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cin >> array[i];
    }

    int minElement = array[0];
    int maxElement = array[0];
    for (int i = 1; i < arraySize; ++i) {
        if (array[i] < minElement) {
            minElement = array[i];
        }
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }
    cout << "Минимальный элемент: " << minElement << endl;
    cout << "Максимальный элемент: " << maxElement << endl;

    const int monthsCount = 12;
    int profits[monthsCount];
    cout << "Введите прибыль фирмы за каждый месяц:" << endl;
    for (int i = 0; i < monthsCount; ++i) {
        cin >> profits[i];
    }

    int startMonth, endMonth;
    cout << "Введите начальный и конечный месяцы диапазона (нумерация с 1):" << endl;
    cin >> startMonth >> endMonth;

    int minProfitMonth = startMonth - 1;
    int maxProfitMonth = startMonth - 1;
    for (int i = startMonth - 1; i < endMonth; ++i) {
        if (profits[i] < profits[minProfitMonth]) {
            minProfitMonth = i;
        }
        if (profits[i] > profits[maxProfitMonth]) {
            maxProfitMonth = i;
        }
    }
    cout << "Месяц с минимальной прибылью: " << minProfitMonth + 1 << endl;
    cout << "Месяц с максимальной прибылью: " << maxProfitMonth + 1 << endl;

    int n;
    cout << "Введите число для начального заполнения массива:" << endl;
    cin >> n;
    int twoDimArray[5][5];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            twoDimArray[i][j] = n + i * 5 + j;
        }
    }
    cout << "Двумерный массив:" << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << twoDimArray[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
