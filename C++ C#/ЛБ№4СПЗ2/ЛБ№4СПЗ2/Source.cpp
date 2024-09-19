#include <iostream>

using namespace std;
// ������� ���� ��� ����'�����
class Computer {
public:
    virtual ~Computer() {}
    virtual string Functionality() const = 0;
};

// ���������� ����'����
class BasicComputer : public Computer {
public:
    string Functionality() const override {
        return "Basic Computer";
    }
};

// ������� ���� ��� ����������
class ComputerDecorator : public Computer {
protected:
    Computer* computer_;

public:
    ComputerDecorator(Computer* computer) : computer_(computer) {}

    string Functionality() const override {
        return computer_->Functionality();
    }
};

// ��������� ��� ���������� ������ ���'��
class MemoryUpgradeDecorator : public ComputerDecorator {
public:
    MemoryUpgradeDecorator(Computer* computer) : ComputerDecorator(computer) {}

    string Functionality() const override {
        return ComputerDecorator::Functionality() + " + Memory Upgrade";
    }
};

// ��������� ��� ���������� �������
class GraphicsUpgradeDecorator : public ComputerDecorator {
public:
    GraphicsUpgradeDecorator(Computer* computer) : ComputerDecorator(computer) {}

    string Functionality() const override {
        return ComputerDecorator::Functionality() + " + Graphics Upgrade";
    }
};

// ��������� ��� ������������ �'������� Wi-Fi
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

    // ��������� ����'����� � ����������� ��������� �� ��������� ����������
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
