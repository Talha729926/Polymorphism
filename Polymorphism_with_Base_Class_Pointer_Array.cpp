#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* shapes[2];
    Square s;
    Circle c;

    shapes[0] = &s;
    shapes[1] = &c;

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
    }
    return 0;
}
