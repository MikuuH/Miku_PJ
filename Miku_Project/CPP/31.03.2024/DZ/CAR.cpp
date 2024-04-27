#include<iostream>

using namespace std;

// Класс машин
class Car {
private:
    int engineCapacity = 2; // Мощность двигателя по умолчанию

public:
    string brand; // Бренд машины
    string model; // Модель машины
    int mileage; // Пробег машины
    int year; // Год выпуска машины

    // Конструктор класса, инициализирует бренд, модель, пробег и год выпуска машины
    Car(string b, string m, int mil, int y) {
        brand = b;
        model = m;
        mileage = mil;
        year = y;
    };

    // Вывод полной информации о машине (бренд, модель, год, пробег, мощность двигателя)
    void carInfoFull() {
        cout << "car: " << brand << endl;
        cout << "model: " << model << endl;
        cout << "year: " << year << endl;
        cout << "mileage: " << mileage << endl;
        cout << "Power: " << engineCapacity << endl;
    };

    // Вывод информации о бренде машины
    void carInfoBrand() {
        cout << "car: " << brand << endl;
    };

    // Вывод информации о модели машины
    void myCarInfoModel() {
        cout << "model: " << model << endl;
    };

    // Вывод информации о годе выпуска машины
    void myCarInfoyear() {
        cout << "year: " << year << endl;
    };

    // Вывод информации о пробеге машины
    void carInfoMil() {
        cout << "mileage: " << mileage << endl;
    };

    // Вывод информации о мощности двигателя машины
    void carInfoEng() {
        cout << "Power: " << engineCapacity << endl;
    }

    // Расчет цены машины на основе мощности двигателя и пробега
    int carPrice(int engineCapacity, int mileage) {
        return engineCapacity * mileage;
    }

    // Изменение мощности двигателя машины
    void editCarPower(int p) {
        engineCapacity = p;
    }
};

int main() {
    // Задаем параметры для создания машины
    string brand = "BMW";
    string model = "BANANA";
    int mileage = 20000;
    int year = 2007;
    int engineCapacity = 2;

    // Создаем объект класса Car и передаем параметры конструктору
    Car* myCar = new Car(brand, model, mileage, year);

    // Изменяем мощность двигателя машины
    myCar->editCarPower(12);
// g
    // Выводим полную информацию о машине
    myCar->carInfoFull();

    // Рассчитываем и выводим цену машины
    cout << myCar->carPrice(mileage, engineCapacity);

    // Освобождаем память, выделенную под объект myCar
    delete myCar;

    return 0;
};
