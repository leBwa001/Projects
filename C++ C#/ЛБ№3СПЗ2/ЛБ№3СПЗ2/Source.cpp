#include <iostream>
using namespace std;
// Абстракція для автомобіля
class Car {
public:
    virtual void drive() = 0;
    virtual ~Car() {}
};

// Реалізація різних типів двигунів
class GasolineEngine {
public:
    void start() {
        cout << "Gasoline engine started." << endl;
    }

    void stop() {
        cout << "Gasoline engine stopped." << endl;
    }
};

class ElectricEngine {
public:
    void start() {
        cout << "Electric engine started." << endl;
    }

    void stop() {
        cout << "Electric engine stopped." << endl;
    }
};

// Конкретний автомобіль з бензиновим двигуном
class GasolineCar : public Car {
private:
    GasolineEngine engine;

public:
    void drive() override {
        engine.start();
        cout << "Driving a car with a gasoline engine." << endl;
        engine.stop();
    }
};

// Конкретний автомобіль з електричним двигуном
class ElectricCar : public Car {
private:
    ElectricEngine engine;

public:
    void drive() override {
        engine.start();
        cout << "Driving an electric car." <<endl;
        engine.stop();
    }
};

void main() {
    Car* gasolineCar = new GasolineCar();
    Car* electricCar = new ElectricCar();

    gasolineCar->drive();
    electricCar->drive();

    delete gasolineCar;
    delete electricCar;
}
