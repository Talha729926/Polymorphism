#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base display" << endl;
    }
};

class Derived1 : public Base {
public:
    void display() override {
        cout << "Derived1 display" << endl;
    }
};

class Derived2 : public Base {
public:
    void display() override {
        cout << "Derived2 display" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived1 d1;
    Derived2 d2;

    basePtr = &d1;
    basePtr->display(); 

    basePtr = &d2;
    basePtr->display(); 

    return 0;
}
