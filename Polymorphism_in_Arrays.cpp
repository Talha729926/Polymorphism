#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base display" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived display" << endl;
    }
};

int main() {
    Base* arr[2];
    Derived d;
    Base b;

    arr[0] = &b;
    arr[1] = &d;

    for (int i = 0; i < 2; i++) {
        arr[i]->display();
    }
    return 0;
}
