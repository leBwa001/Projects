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
        return value / 1000.0; // 1 ���� = 0.001 ��������
    }
};

class MetersToCentimeters : public LengthConversionStrategy {
public:
    double convert(double value) const override {
        return value * 100.0; // 1 ���� = 100 ����������
    }
};

class MetersToMillimeters : public LengthConversionStrategy {
public:
    double convert(double value) const override {
        return value * 1000.0; // 1 ���� = 1000 �������
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
            cout << "�������� �� ��������." <<endl;
        }
    }

    double convert(double value) const {
        if (currentStrategy) {
            return currentStrategy->convert(value);
        }
        else {
            cout << "�� ����������� �������� �����������." <<endl;
            return value;
        }
    }
};

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    LengthConverter converter;

    double value;
    cout << "������ ������� � ������: ";
    cin >> value;

    int choice;
    cout << "������ ������� ��� �����������:\n"
        "1 - ʳ�������\n"
        "2 - ����������\n"
        "3 - ̳������\n";
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
        cout << "������� ����." <<endl;
        break;
    }

    converter.setStrategy(chosenUnit);
    double result = converter.convert(value);

    cout << value << " ����� = " << result << " " << chosenUnit << endl;
}
