// You are using GCC
//polymorphism
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* basePtr; // Pointer to Base class
    Derived derivedObj; // Object of Derived class
    basePtr = &derivedObj; // basePtr points to derivedObj

    // Calls Derived class's show function
    basePtr->show();

    return 0;
}

//Abstraction
class AbstractShape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public AbstractShape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Circle circle;
    circle.draw();
    return 0;
}

//Inheritance
class Vehicle {
public:
    string brand = "Ford";
    void honk() {
        cout << "Beep beep!" << endl;
    }
};

class Car : public Vehicle {
public:
    string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model << endl;
    return 0;
}

//Encapsulation
class Employee {
private:
    int salary;

public:
    void setSalary(int s) {
        salary = s;
    }

    int getSalary() {
        return salary;
    }
};

//Example code for Class and Objects
class Car {
public:
    string brand;
    string model;
    int year;

    void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;
    car1.displayInfo();

    return 0;
}











