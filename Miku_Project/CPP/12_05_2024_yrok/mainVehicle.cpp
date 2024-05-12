




//В функции main() создайте объекты каждого класса и продемонстрируйте полиморфное поведение :
//
//Создайте массив или вектор указателей на Vehicle.
//Добавьте в массив объекты каждого типа(автомобиль, велосипед, лодка).
//Используйте цикл для вызова displayInfo() у каждого объекта в массиве.


#include <iostream>
#include <string>

using namespace std;

class Vehicle {
    private:
        int maxSpeed;
        string fuelType;

    public:
        Vehicle(int maxSpeedInfo, string fuelTypeInfo) {
            maxSpeed = maxSpeedInfo;
            fuelType = fuelTypeInfo;
        };

        virtual void VehicleFullInfo() const {
            cout << "maxSpeed: " << maxSpeed << endl;
            cout << "fuelType: " << fuelType << endl;
        };
    };


class Car : public Vehicle {
    public:
        int numberOfDoors;

        Car(int maxSpeedInfo, string fuelTypeInfo, int doors) : Vehicle(maxSpeedInfo, fuelTypeInfo), numberOfDoors(doors) {}

        void VehicleFullInfo() const override {
            Vehicle::VehicleFullInfo();
            cout << "numberOfDoors: " << numberOfDoors << endl;
        };
    };


class Bike : public Vehicle {
    public:
        bool hasBasket;

        Bike(int maxSpeedInfo, string fuelTypeInfo, bool basked) : Vehicle(maxSpeedInfo, fuelTypeInfo), hasBasket(basked) {}

        void VehicleFullInfo() const override {
            Vehicle::VehicleFullInfo();
            cout << "Basket: " << (hasBasket ? "Yes" : "No") << endl;
    };
};


class Boat : public Vehicle {
    public:
        string boatType;

        Bike(int maxSpeedInfo, string fuelTypeInfo, string boatTypeInfo) : Vehicle(maxSpeedInfo, fuelTypeInfo), boatType(boatTypeInfo) {}

        void VehicleFullInfo() const override {
            Vehicle::VehicleFullInfo();
            cout << "boatTypeInfo: " << boatTypeInfo << endl;

        }
}



int main() {
    Car car(200, "Gasoline", 4);
    Bike bike(30, "Pedal", true);

    cout << "Car information:" << endl;
    car.VehicleFullInfo();

    cout << "\nBike information:" << endl;
    bike.VehicleFullInfo();

    return 0;
}

