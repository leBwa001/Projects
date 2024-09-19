#include <iostream>
#include <string>

using namespace std;

class Handler {
public:
    virtual Handler* SetNext(Handler* handler) = 0;
    virtual string Handle(string request) = 0;
};

class SupportHandler : public Handler {
private:
    Handler* successor_;

public:
    SupportHandler() : successor_(nullptr) {}

    Handler* SetNext(Handler* handler) override {
        this->successor_ = handler;
        return handler;
    }

    string Handle(string request) override {
        if (this->successor_) {
            return this->successor_->Handle(request);
        }
        return {};
    }
};

class PurchaseSupport : public SupportHandler {
public:
    string Handle(string request) override {
        if (request == "Issue with purchase") {
            return "Resolved by purchase support.";
        }
        return SupportHandler::Handle(request);
    }
};

class TechnicalSupport : public SupportHandler {
public:
    virtual string Handle(string request) = 0;
};

class SimpleProblemSupport : public TechnicalSupport {
public:
    string Handle(string request) override {
        if (request == "Simple problem") {
            return "Resolved by simple problem support.";
        }
        return SupportHandler::Handle(request);
    }
};

class ComplexProblemSupport : public TechnicalSupport {
public:
    string Handle(string request) override {
        if (request == "Complex problem") {
            return "Resolved by complex problem support.";
        }
        return SupportHandler::Handle(request);
    }
};

int main() {
    PurchaseSupport purchaseSupport;
    SimpleProblemSupport simpleProblemSupport;
    ComplexProblemSupport complexProblemSupport;

    purchaseSupport.SetNext(&simpleProblemSupport);
    simpleProblemSupport.SetNext(&complexProblemSupport);

    cout << "Processing request: Issue with purchase" << endl;
    cout << purchaseSupport.Handle("Issue with purchase") << endl;

    cout << "\nProcessing request: Simple problem" << endl;
    cout << purchaseSupport.Handle("Simple problem") << endl;

    cout << "\nProcessing request: Complex problem" << endl;
    cout << purchaseSupport.Handle("Complex problem") << endl;

    cout << "\nProcessing request: Unknown problem" << endl;
    cout << purchaseSupport.Handle("Unknown problem") << endl;

    return 0;
}
