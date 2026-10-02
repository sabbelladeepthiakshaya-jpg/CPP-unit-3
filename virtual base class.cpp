#include <iostream> 
using namespace std; 
 
// Base class 
class A { 
public: 
    int x; 
    A() { 
        x = 10; 
        cout << "Constructor of A called" << endl; 
    } 
}; 
 
// B and C inherit A virtually 
class B : virtual public A { 
public: 
    B() { 
        cout << "Constructor of B called" << endl; 
    } 
}; 
 
class C : virtual public A { 
public: 
    C() { 
        cout << "Constructor of C called" << endl; 
    } 
}; 
 
// D inherits both B and C 
class D : public B, public C { 
public: 
    D() { 
        cout << "Constructor of D called" << endl; 
    } 
    void show() { 
        cout << "Value of x = " << x << endl; 
    } 
}; 
 
int main() { 
    D obj;   // Object of derived class 
    obj.show(); 
    return 0; 
}
