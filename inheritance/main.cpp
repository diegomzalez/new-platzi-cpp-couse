#include <iostream>
#include <string>

class Animal
{
protected:
    std::string food;

private:
    static int animal_counter;

public:
    Animal();
    ~Animal();
    static int getAnimalCounter();
    std::string getFood()
    {
        return this->food;
    }
    void eat()
    {
        std::cout << "This animal is eating " << this->food << "...ñom, ñon...\n";
    }
};

int Animal::animal_counter = 0;

Animal::Animal()
{
    std::cout << "Creating a new animal...\n";
    animal_counter++;
}

Animal::~Animal()
{
    std::cout << "Destroying an animal...\n";
    animal_counter--;
}
int Animal::getAnimalCounter()
{
    return animal_counter;
}

class Herbivorous : public Animal
{
public:
    Herbivorous() : Animal()
    {
        this->food = "Floors";
    }

    void pasture()
    {
        std::cout << "This animal is grazing\n";
    }
};

class Carnivorous : public Animal
{
public:
    Carnivorous() : Animal()
    {
        this->food = "Meat";
    }
    void hunt()
    {
        std::cout << "This animal is Hunting...\n";
    }
};

class Omnivore : public Herbivorous, public Carnivorous
{
public:
    Omnivore() : Herbivorous(), Carnivorous()
    {
    }

    void eat()
    {
        std::cout << "This animal can eat everything!";
    }
};

int main()
{
    Animal *a = new Animal();
    Herbivorous *h = new Herbivorous();
    Carnivorous *c = new Carnivorous();
    Omnivore *o = new Omnivore();
    std::cout << "Animal counter: " << Animal::getAnimalCounter() << std::endl;

    a->eat();
    h->pasture();
    c->hunt();
    o->eat();
    delete a;
    std::cout << "Animal counter: " << Animal::getAnimalCounter() << std::endl;
}