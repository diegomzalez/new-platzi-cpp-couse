#include <iostream>

int main()
{
    // Union
    union number_letter
    {
        int num;
        char letter;
    };

    number_letter x = {'A'};

    std::cout << "x as a letter: " << (int)x.letter << std::endl;
    std::cout << "x as a number: " << (char)x.num << std::endl;

    // Enumerations
    enum weekdays
    {
        Monday = 'M',
        Tuesday = 'T',
        Wednesday = 'W'
    };
    weekdays day = Tuesday;

    std::cout << "Day is: " << (char)day << std::endl;
}