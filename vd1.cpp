#include <iostream>
#include <string>

// Định nghĩa class Person
class Person {
private:
    std::string name;
    int age;
public:
    Person(std::string n, int a) : name(n), age(a) {}
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// Định nghĩa class Address
class Address {
private:
    std::string street;
    std::string city;
public:
    Address(std::string s, std::string c) : street(s), city(c) {}
    void display() {
        std::cout << "Address: " << street << ", " << city << std::endl;
    }
};

int main() {
    Person person("John", 30);
    Address address("123 Main St", "Springfield");

    person.display();
    address.display();

    return 0;
}
