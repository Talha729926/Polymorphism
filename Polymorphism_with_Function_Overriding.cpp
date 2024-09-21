#include <iostream>
using namespace std;

class Parent {
public:
    virtual void method() {
        cout << "Parent method" << endl;
    }
};

class Child : public Parent {
public:
    void method() override {
        cout << "Child method" << endl;
    }
};

int main() {
    Parent* p = new Child();
    p->method(); 
    delete p;
    return 0;
}
