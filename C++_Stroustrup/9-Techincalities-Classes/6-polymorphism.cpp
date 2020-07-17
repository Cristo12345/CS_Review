#include <iostream>
using namespace std;

// POLYMORPHISM - OOP principle. classes that inherit a method can alter their specific version of a method
// Ex: An "Animal" class will have a makeSound method. "Dog" and "Cat" can inherit that method and alter it

class Animal {
    public: 
       void makeSound() {
           cout << "ahhhhhh" << endl;
       }
};

class Dog : public Animal {
    public: 
        void makeSound() {
            cout << "woof woof" << endl;
        }
};

class Cat : public Animal {
    public: 
        void makeSound() {
            cout << "meow meow" << endl;
        }
};

int main() {
    Dog Fido;
    Cat Pepper;

    Fido.makeSound();
    Pepper.makeSound();

    return 0;
}