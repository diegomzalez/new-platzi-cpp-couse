#include <iostream>
#include <string>

struct Person
{
    std::string name;
    short age;
};

int main()
{
    // Using normal definition without pointer
    Person person = Person();
    person.name = "Diego";
    person.age = 19;
    std::cout << "Person's name: " << person.name << std::endl;
    std::cout << "Person's age: " << person.age << std::endl;

    // Using pointer
    Person *person_pointer = new Person();
    person_pointer->name = "Diego";
    person_pointer->age = 19;
    std::cout << "Person's pointer name: " << person_pointer->name << std::endl;
    std::cout << "Person's pointer age: " << person_pointer->age << std::endl;
}