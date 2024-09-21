#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    virtual void show() {
        cout << "Class B" << endl;
    }
};

class C : public A, public B {
public:
    void show() override {
        A::show();
        B::show();
        cout << "Class C" << endl;
    }
};

int main() {
    C c;
    c.show();
    return 0;
}
