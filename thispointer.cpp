#include <iostream>
using namespace std;
class MyClass {
    private:
    int x=10;
public:
    void printAddress() {
        cout << "Object address: " << this << endl;
    }
     void printValue() {
        cout << "Object address: " << this->x << endl;
    }
};

int main() {
    MyClass obj1, obj2;

    // Calling member function using the object
    obj1.printAddress();
    obj2.printValue();

    return 0;
}
