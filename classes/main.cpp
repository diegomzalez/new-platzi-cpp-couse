#include <iostream>
#include <string>

class Person
{
public:
    std::string name = "Diego";
    short age = 19;

    Person(std::string name, short age)
    {
        this->name = name;
        this->age = age;
    }

    ~Person()
    {
        std::cout << "Destructor\n";
    }

    void greet()
    {
        std::cout << name << std::endl;
    }
};

int main()
{
    Person person = Person("Diego", 19);
    std::cout << "Person's name: " << person.name << std::endl;
    std::cout << "Person's age: " << person.age << std::endl;

    Person *person_pointer = new Person("Diegao", 19);
    std::cout << "Person's pointer name: " << person_pointer->name << std::endl;
    std::cout << "Person's pointer age: " << person_pointer->age << std::endl;

    person_pointer->greet();

    delete person_pointer;
}