/**
 *
 *
 *
 * Программа "Автозавод"
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


Вопросы
1. написать этапы реализации задания
2. объяснить как будет реализован каждый этап
3. обработка ошибок, какие могут возникать и где их обрабатывать
4. какие варианты создания разных машин

5. варианты взаимодействи я с пользователем
6. что можно использовать вместо стека, и для чего можно применять разные структуры и в программе и в реальной жизни
(что сделать первое, второе и почему именно так)
*/



/*

1. реализовать основную функцию car, а за тем его производные

2.
Создаем class Car, делаем его public. Заполняем основными параметрами для автомобиля
после чего определяем виртуальную функцию displayInfo для вывода информации о автомобиле.

После чего создаем остальные классы, такие как:
Sedan: Для легковых автомобилей.
Pickup: Для пикапов.
Truck: Для грузовиков.
Bus: Для автобусов.

и их завязываем на Car. так же кидаем в них уникальные параметры.
Так же, для каждого класса переопределяем displayInfo для того, что бы вывести инфу >
и для Седана к примеру.

После чего, создадим небольшое меню в консоли, дабы наши создатели каров, могли удобно >
создавать кары, или же высвечивать инфу.


3.
К примеру, мы можем ввести огранечение на колеса. Не может же быть у >
седана 30 колес? Мы можем сделать проверку, и в случае чего вызывает исключение invalid_argument.
Ну, или же, если мы указали не тот тип, так же можно invalid_argument вызвать

4.

в каре, реализуем цвет тип string и колеса тип int.
в остальных подклассах, мы задаем другие параметры, такие как >
(максимальная скорость, грузоподъёмность, количество осей, количество мест) и >
проверку правильности количества колёс.


5.
В консоли мы можем выводить основную инфу о каре, создавать их.





Дополнительно: не все к сожалению заполнил. Пользовался гуглом, и так же рылся в прошлых уроках
дабы вспомнить как что делать.
Гуглил: виртуальные функции, так как забыл, как их делать.

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

            if (w != 4) {
                throw invalid_argument("должно быть 4 колеса!, или больше!");
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
    private:
        int axis = 2;

    public:
        float maxSpeed;
        int cargo;

        Truck(string c, int w, float maxSpeedTruck, int cargoTruck)
            : Car(c, w),
                maxSpeed(maxSpeedTruck),
                cargo(cargoTruck) {}

        void displayInfo() const override {
            Car::displayInfo();
            cout << "Axis: " << axis << endl;
            cout << "Max Speed: " << maxSpeed << endl;
            cout << "Cargo Capacity: " << cargo << endl;
        }
};

class Bus : public Car {
    private:
        int axis = 2;

    public:
        float maxSpeed;
        int cargo;

        Bus(string c, int w, float maxSpeedBus, int cargoBus)
            : Car(c, w),
                maxSpeed(maxSpeedBus),
                cargo(cargoBus) {}

        void displayInfo() const override {
            Car::displayInfo();
            cout << "Axis: " << axis << endl;
            cout << "Max Speed: " << maxSpeed << endl;
            cout << "Seating Capacity: " << cargo << endl;
        }
};

void addNewSedan() {
    string color;
    int wheels;
    float maxSpeed;
    int cargo;

    



    Sedan* mySedan = new Sedan("Red", 4, 180.5, 4100);
    mySedan->displayInfo();
};


void addNewCars() {
    int choice;

    cout <<
        "можно добавить:\n1. Sedan\n2. Pickup\n3. Truck\n4. Bus" << endl;
    cout << "ваш выбор?" << endl;

    cin >> choice;

    switch (choice)
    {
    case 1:
        addNewSedan();

        break;

    default:
        cerr << "максимум от 1 до 4." << endl;
    }

};

int main() {

    // try
    // {
    //     Sedan mySedan("Red", 4, 180.5, 4100);
    //     mySedan.displayInfo();
    // }
    // catch(const std::invalid_argument& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // // Создаем объект класса Car и передаем параметры конструктору
    // Car* myCar = new Car(brand, model, mileage, year);

    // // Изменяем мощность двигателя машины
    // myCar->editCarPower(12);


    addNewCars();
    return 0;
}
