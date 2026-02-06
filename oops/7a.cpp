#include <iostream>
using namespace std;
class Base {
public:
void show() {
cout << "Show funcƟon of Base class" << endl;
}
};
class Derived : public Base {
public:
void show() {
cout << "Show funcƟon of Derived class" << endl;
}
};
int main() {
Derived d;
d.show(); // Calls Derived class funcƟon
return 0;
}
