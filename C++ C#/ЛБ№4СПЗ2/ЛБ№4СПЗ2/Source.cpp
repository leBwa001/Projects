#include <iostream>

using namespace std;
// Базовий клас для комп'ютера
class Computer {
public:
    virtual ~Computer() {}
    virtual string Functionality() const = 0;
};

// Конкретний комп'ютер
class BasicComputer : public Computer {
public:
    string Functionality() const override {
        return "Basic Computer";
    }
};

// Базовий клас для декораторів
class ComputerDecorator : public Computer {
protected:
    Computer* computer_;

public:
    ComputerDecorator(Computer* computer) : computer_(computer) {}

    string Functionality() const override {
        return computer_->Functionality();
    }
};

// Декоратор для розширення обсягу пам'яті
class MemoryUpgradeDecorator : public ComputerDecorator {
public:
    MemoryUpgradeDecorator(Computer* computer) : ComputerDecorator(computer) {}

    string Functionality() const override {
        return ComputerDecorator::Functionality() + " + Memory Upgrade";
    }
};

// Декоратор для покращення графіки
class GraphicsUpgradeDecorator : public ComputerDecorator {
public:
    GraphicsUpgradeDecorator(Computer* computer) : ComputerDecorator(computer) {}

    string Functionality() const override {
        return ComputerDecorator::Functionality() + " + Graphics Upgrade";
    }
};

// Декоратор для бездротового з'єднання Wi-Fi
class WiFiUpgradeDecorator : public ComputerDecorator {
public:
    WiFiUpgradeDecorator(Computer* computer) : ComputerDecorator(computer) {}

    string Functionality() const override {
        return ComputerDecorator::Functionality() + " + WiFi Upgrade";
    }
};

void main() {
    Computer* basicComputer = new BasicComputer();
    cout << "Basic Computer Functionality: " << basicComputer->Functionality() << endl;

    // Оновлення комп'ютера з додатковими функціями за допомогою декораторів
    Computer* upgradedComputer = new MemoryUpgradeDecorator(
        new WiFiUpgradeDecorator(
            new GraphicsUpgradeDecorator(
                basicComputer
            )
        )
    );

    cout << "Upgraded Computer Functionality: " << upgradedComputer->Functionality() << endl;

    delete basicComputer;
    delete upgradedComputer;
}
