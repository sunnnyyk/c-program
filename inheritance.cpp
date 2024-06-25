#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

int main() {
    Dog myDog;
    // Inherited method
    myDog.eat();  
     // Child class method  
    myDog.bark();  
    return 0;
}
