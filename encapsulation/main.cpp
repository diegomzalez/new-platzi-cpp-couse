#include <iostream>
#include <string>

class Person
{
private:
    std::string name;
    short age;

public:
    static int people_count;
    Person(std::string name, short age) : name(name), age(age)
    {
        ++people_count;
    }
    ~Person()
    {
        std::cout << "Destructor is executing...\n";
    }
    void setName(std::string name)
    {
        this->name = name;
    }

    void setAge(short age)
    {
        this->age = age;
    }
    void greet() const
    {
        std::cout << this->name << ": Hi, I am " << this->age << std::endl;
    }
};
int Person::people_count = 0;
int main()
{
    Person *diego = new Person("Diego", 19);
    diego->greet();
    delete diego;
    Person *felix = new Person("Felix", 28);
    felix->greet();

    std::cout << "People count: " << Person::people_count << std::endl;
    delete felix;
}