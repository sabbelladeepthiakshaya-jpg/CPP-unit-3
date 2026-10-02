#include <iostream> 
using namespace std; 
class Number { 
private: 
    int value; 
public: 
    // Constructor 
    Number(int v = 0) { 
        value = v; 
    } 
    // Unary minus operator overloading (member function) 
    Number operator-() { 
        return Number(-value); 
    } 
    // Binary plus operator overloading (member function) 
    Number operator+(const Number &obj) { 
        return Number(value + obj.value); 
    } 
    // Display function 
    void display() { 
        cout << "Value = " << value << endl; 
    } 
}; 
int main() { 
 
 
    Number n1(10), n2(20), result; 
    cout << "Original values:" << endl; 
    n1.display(); 
    n2.display(); 
    // Binary operator (+) 
    result = n1 + n2; 
    cout << "After Binary + Operator (n1 + n2):" << endl; 
    result.display(); 
    // Unary operator (-) 
    result = -n1; 
    cout << "After Unary - Operator (-n1):" << endl; 
    result.display(); 
    return 0; 
}
