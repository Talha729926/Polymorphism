#include <iostream>
using namespace std;

class AbstractShape {
public:
    virtual void draw() = 0; 
};

class Circle : public AbstractShape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Circle c;
    c.draw();
    return 0;
}
