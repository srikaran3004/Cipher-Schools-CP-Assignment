#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    virtual string sound() = 0;
};

class Dog : public Animal {
public:
    string sound() override {
        return "Bark";
    }
};

class Cat : public Animal {
public:
    string sound() override {
        return "Meow";
    }
};

int main() {
    Animal* dog = new Dog;
    Animal* cat = new Cat;
    cout << "Dog: " << dog->sound() << endl;
    cout << "Cat: " << cat->sound() << endl;
    delete dog;
    delete cat;
    return 0;
}
