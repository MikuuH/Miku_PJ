#include<iostream>

using namespace std;

// Класс машин
class Car {
    private:
        int engineCapacity = 2;

    public:
        string brand;
        string model;
        int mileage;
        int year;

        Car(string b, string m, int mil, int y) {
            brand = b;
            model = m;
            mileage = mil;
            year = y;
        };

        void carInfoFull() {
            cout << "car: " << brand << endl;
            cout << "model: " << model << endl;
            cout << "year: " << year << endl;
            cout << "mileage: " << mileage << endl;
            cout << "Power: " << engineCapacity << endl;
        };

        void carInfoBrand() {
            cout << "car: " << brand << endl;
        };

        void myCarInfoModel() {
            cout << "model: " << model << endl;
        };

        void myCarInfoyear() {
            cout << "year: " << year << endl;
        };

        void carInfoMil() {
            cout << "mileage: " << mileage << endl;
        };

        void carInfoEng() {
            cout << "Power: " << engineCapacity << endl;
        }

        int carPrice(int engineCapacity, int mileage) {
            return engineCapacity * mileage;
        }

        void editCarPower(int p) {
            engineCapacity = p;
        }
};

int main() {
    string brand = "BMW";
    string model = "BANANA";
    int mileage = 20000;
    int year = 2007;
    int engineCapacity = 2;


    // так можно, но не советуется
    // Car myCar(brand, model, mileage, year);
    // myCar.carInfoFull();
    // myCar.carInfoMil();

    // так лучше:
    Car* myCar = new Car(brand, model, mileage, year);
    myCar->editCarPower(12);
    myCar->carInfoFull();

    cout << myCar->carPrice(mileage, engineCapacity);

};

