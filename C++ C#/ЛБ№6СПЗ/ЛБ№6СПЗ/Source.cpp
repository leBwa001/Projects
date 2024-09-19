#include <iostream>
#include <map>
#include <string>
#include <Windows.h>

using namespace std;

class LengthConversionStrategy {
public:
    virtual double convert(double value) const = 0;
    virtual ~LengthConversionStrategy() {}
};

class MetersToKilometers : public LengthConversionStrategy {
public:
    double convert(double value) const override {
        return value / 1000.0; // 1 метр = 0.001 кілометра
    }
};

class MetersToCentimeters : public LengthConversionStrategy {
public:
    double convert(double value) const override {
        return value * 100.0; // 1 метр = 100 сантиметрів
    }
};

class MetersToMillimeters : public LengthConversionStrategy {
public:
    double convert(double value) const override {
        return value * 1000.0; // 1 метр = 1000 міліметрів
    }
};

class LengthConverter {
private:
    map<string, LengthConversionStrategy*> strategies;
    LengthConversionStrategy* currentStrategy = nullptr;
public:
    LengthConverter() {
        strategies["Kilometers"] = new MetersToKilometers();
        strategies["Centimeters"] = new MetersToCentimeters();
        strategies["Millimeters"] = new MetersToMillimeters();
    }

    void setStrategy(const std::string& strategyName) {
        if (strategies.find(strategyName) != strategies.end()) {
            currentStrategy = strategies[strategyName];
        }
        else {
            cout << "Стратегія не знайдена." <<endl;
        }
    }

    double convert(double value) const {
        if (currentStrategy) {
            return currentStrategy->convert(value);
        }
        else {
            cout << "Не встановлено стратегію конвертації." <<endl;
            return value;
        }
    }
};

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    LengthConverter converter;

    double value;
    cout << "Введіть довжину в метрах: ";
    cin >> value;

    int choice;
    cout << "Оберіть одиниці для конвертації:\n"
        "1 - Кілометри\n"
        "2 - Сантиметри\n"
        "3 - Міліметри\n";
    cin >> choice;

    string chosenUnit;
    switch (choice) {
    case 1:
        chosenUnit = "Kilometers";
        break;
    case 2:
        chosenUnit = "Centimeters";
        break;
    case 3:
        chosenUnit = "Millimeters";
        break;
    default:
        cout << "Невірний вибір." <<endl;
        break;
    }

    converter.setStrategy(chosenUnit);
    double result = converter.convert(value);

    cout << value << " метрів = " << result << " " << chosenUnit << endl;
}
