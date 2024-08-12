#include<iostream>
using namespace std;

class Person {
public:
    int age;
    void sayHello() {
        cout << "Hello!" << endl;
    }
};
class Employee : public Person {
public:
    void doWork() {
        cout << "Working..." << endl;
    }
};


int main() {
    Person* personPtr = new Person();
    personPtr->age = 25;  // access data member using arrow operator
    personPtr->sayHello();  // access member function using arrow operator
    delete personPtr;
    return 0;
}