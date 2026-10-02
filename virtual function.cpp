#include <iostream> 
using namespace std; 
class Base { 
public: 
    virtual void show() { 
        cout << "Base class show() called." << endl; 
    } 
}; 
class Derived : public Base { 
public: 
    void show() override {  // Overrides the base class function 
        cout << "Derived class show() called." << endl; 
    } 
}; 
int main() { 
    Base* basePtr;       // Base class pointer 
    Derived d;           // Derived class object 
    basePtr = &d;        // Pointing base class pointer to derived 
object 
    // Virtual function call: resolved at runtime 
    basePtr->show();     // Calls Derived class's show() due to 
virtual function 
    return 0; 
}
