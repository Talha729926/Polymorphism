#include <iostream>
using namespace std;

class Printer {
public:
    void print(int i) {
        cout << "Printing integer: " << i << endl;
    }
    void print(double d) {
        cout << "Printing double: " << d << endl;
    }
};

int main() {
    Printer p;
    p.print(5);
    p.print(5.5);
    return 0;
}
