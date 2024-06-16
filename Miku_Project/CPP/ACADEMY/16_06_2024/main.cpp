/**
Программа "Автозавод"
Цель:
Создать программу для моделирования автозавода, которая позволит производить автомобили различных типов, учитывая спецификации каждого типа и обеспечив правильную обработку ошибок через систему исключений.

Описание задачи:
Основной класс Car:

Разработайте класс Car, который будет содержать общие для всех автомобилей атрибуты, такие как количество колёс и цвет. Инициализация этих атрибутов должна происходить через конструктор.
В классе должен быть реализован виртуальный метод displayInfo(), который выводит информацию о конкретном автомобиле.
Классы для различных типов автомобилей:

Sedan: Для легковых автомобилей.
Pickup: Для пикапов.
Truck: Для грузовиков.
Bus: Для автобусов.
Каждый из этих классов должен включать уникальный параметр (максимальная скорость, грузоподъёмность, количество осей, количество мест) и проверку правильности количества колёс.

Механизм обработки ошибок:
В конструкторе каждого производного класса добавьте проверку, чтобы убедиться, что количество колёс соответствует типу автомобиля. В случае ошибки следует генерировать исключение std::invalid_argument.

Система создания автомобилей:
Реализуйте механизм, который по введённым данным (тип автомобиля, количество колёс, цвет, уникальный параметр) создает соответствующий объект автомобиля или выдает исключение при ошибочном вводе.


Интерактивная работа с пользователем:

Предложите пользователю ввести количество создаваемых автомобилей. После ввода данных о всех автомобилях и создания обектов программа должна отобразить информацию о каждом авто. 
для хранения использовать стек
*/

#include <iostream>
#include <string>
using namespace std;


class Car {
    public:
        string color;
        int wheels;

        Car(string c, int w) : color(c), wheels(w) {
            color = c;
            wheels = w;

            if (w < 4 || w > 8) {
                throw invalid_argument("от 4 до 8 колес максимум.");
            }
        }

        virtual void displayInfo() const {
            cout << "Color: " << color << endl;
            cout << "Wheels: " << wheels << endl;
        }
};


class Sedan : public Car {
    private:
        int axis = 2;

    public:
        float maxSpeed;
        int cargo;


        Sedan(string c, int w, float maxSpeedSedan, int cargoSedan)
            : Car(c, w),
                maxSpeed(maxSpeedSedan),
                cargo(cargoSedan) {

        }

        void displayInfo() const override {
            Car::displayInfo();
            cout << "Axis: " << axis << endl;
            cout << "Max Speed: " << maxSpeed << endl;
            cout << "Cargo Capacity: " << cargo << endl;
        }
};


class Pickup : public Car {
    private:
        int axis = 2;

    public:
        float maxSpeed;
        int cargo;

        Pickup(string c, int w, float maxSpeedPickup, int cargoPickup)
            : Car(c, w),
                maxSpeed(maxSpeedPickup),
                cargo(cargoPickup) {}

        void displayInfo() const override {
            Car::displayInfo();
            cout << "Axis: " << axis << endl;
            cout << "Max Speed: " << maxSpeed << endl;
            cout << "Cargo Capacity: " << cargo << endl;
        }
};


class Truck : public Car {
    public:
        float maxSpeed;
        int cargo;
        int axis = 3;

        Truck(string c, int w, float maxSpeedTruck, int cargoTruck, int axisTruck)
            : Car(c, w),
                maxSpeed(maxSpeedTruck),
                cargo(cargoTruck),
                axis(axisTruck) {}

        void displayInfo() const override {
            Car::displayInfo();
            cout << "Axis: " << axis << endl;
            cout << "Max Speed: " << maxSpeed << endl;
            cout << "Cargo Capacity: " << cargo << endl;
        }
};


class Bus : public Car {
    public:
        float maxSpeed;
        int cargo;
        int axis = 3;

        Bus(string c, int w, float maxSpeedBus, int cargoBus, int axisBus)
            : Car(c, w),
                maxSpeed(maxSpeedBus),
                cargo(cargoBus),
                axis(axisBus) {}

        void displayInfo() const override {
            Car::displayInfo();
            cout << "Axis: " << axis << endl;
            cout << "Max Speed: " << maxSpeed << endl;
            cout << "Seating Capacity: " << cargo << endl;
        }
};


Car* addNewCar(string cars) {
    int axis;
    string color;
    int wheels;
    float maxSpeed;
    int cargo;

    if (cars == "Truck" || cars == "Bus") {
        cout << "Какая ось должна быть у " << cars << endl;
        cout << "По умолчанию - 3" << endl;
        cin >> axis;
    }

    if (cars == "Sedan") {
        return new Sedan(color, wheels, maxSpeed, cargo);
    }
    else if (cars == "Pickup") {
        return new Pickup(color, wheels, maxSpeed, cargo);
    }

    if (cars == "Truck") {
        return new Truck(color, wheels, maxSpeed, cargo, axis);
    }
    else if (cars == "Bus") {
        return new Bus(color, wheels, maxSpeed, cargo, axis);
    }
};


void choiceNewCars() {
    int choice;

    cout <<
        "можно добавить:\n1. Sedan\n2. Pickup\n3. Truck\n4. Bus" << endl;
    cout << "ваш выбор?" << endl;

    cin >> choice;

    switch (choice)
    {
    case 1:
        addNewCar("Sedan");
        break;
    case 2:
        addNewCar("Pickup");
        break;
    case 3:
        addNewCar("Truck");
        break;
    case 4:
        addNewCar("Bus");
        break;

    default:
        cerr << "максимум от 1 до 4." << endl;
    }

};

int main() {

    string carType;
    cout << "Введите тип автомобиля (Sedan, Pickup, Truck, Bus): ";
    cin >> carType;

    Car* newCar = addNewCar(carType);
    newCar->displayInfo();


    //choiceNewCars();
    return 0;
}
