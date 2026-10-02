#include <iostream> 
#include <cmath>   // For M_PI constant 
using namespace std; 
// Abstract class 
class Shape { 
public: 
    // Pure virtual function 
    virtual float area() = 0;   
}; 
 
// Derived class for Rectangle 
class Rectangle : public Shape { 
private: 
    float length, breadth; 
public: 
    Rectangle(float l, float b) { 
        length = l; 
        breadth = b; 
    } 
    float area() override { 
        return length * breadth; 
    } 
}; 
class Circle : public Shape { 
private: 
 
 
    float radius; 
public: 
    Circle(float r) { 
        radius = r; 
    } 
    float area() override { 
        return M_PI * radius * radius; 
    } 
}; 
 
class Triangle : public Shape { 
private: 
    float base, height; 
public: 
    Triangle(float b, float h) { 
        base = b; 
        height = h; 
    } 
    float area() override { 
        return 0.5 * base * height; 
    } 
}; 
 
// Main function 
int main() { 
    Shape* shape;   // Base class pointer 
    Rectangle rect(10, 5); 
 
 
    Circle circ(7); 
    Triangle tri(8, 6); 
    shape = &rect; 
    cout << "Area of Rectangle: " << shape->area() << endl; 
    shape = &circ; 
    cout << "Area of Circle: " << shape->area() << endl; 
 
    shape = &tri; 
    cout << "Area of Triangle: " << shape->area() << endl; 
    return 0;
}
