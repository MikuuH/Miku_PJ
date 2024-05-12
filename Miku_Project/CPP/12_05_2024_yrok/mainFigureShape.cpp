#include <iostream>
#include <string>

using namespace std;


class Shape {
public:
    string color;

    virtual double calculateArea() const {
        return 0.0;
    }

    virtual ~Shape() {}
};


class Circle : public Shape {
public:
    int radius = 5;

    double calculateArea() const override {
        return 3.14 * radius * radius;
    }

    int getRadius() {
        return radius;
    }
};


class triangle : public Shape {
    public:
        int base = 5;
        int height = 5;

        // переопределяем calculateArea
        double calculateArea() const override {
            return 0.5 * base * height;
        }
};


class rectangle : public Shape {
    public:
        int weight = 5;
        int height = 5;
        
        // переопределяем calculateArea
        double calculateArea() const override {
            return weight * height;
        }
}



int main() {

    Shape* shape1 = new Shape();
    Circle* circle = new Circle();

    cout << "Площадь круга shape1: " << shape1->calculateArea() << endl;
    cout << "Площадь круга circle: " << circle->calculateArea() << endl;
    cout << "радиус круга: " << circle->getRadius() << endl;


    return 0;
}
