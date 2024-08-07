#include <iostream>

int main()
{
    char letter = 'A';
    char *pointer = &letter;
    std::cout << "Value of letter: " << letter << std::endl;
    std::cout << "Memory Address of letter: " << (int *)&letter << std::endl;
    std::cout << "Value of *pointer: " << (int *)pointer << std::endl;
    std::cout << "Value which *pointer is poiting: " << *pointer << std::endl;
}