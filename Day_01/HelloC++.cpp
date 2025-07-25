#include <iostream>

// This is a simple program that asks for the user's name, age, favorite quote and then greets them.
// Bonus: Add \n, \t, and endl.

int main() {
    std::cout << "Hello, C++. Welcome to the world of C++!" << std::endl;

    char name[56];
    std::cout << "What is your name?\n\t> ";
    std::cin.getline(name, 56);

    char age[50];
    std::cout << "What is your age?\n\t> ";
    std::cin.getline(age, 50);

    char favoriteQuote[50];
    std::cout << "What is your favorite quote?\n\t> ";
    std::cin.getline(favoriteQuote, 50);

    std::cout << "\nNice to meet you, " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;
    std::cout << "Your favorite quote is:\n\t\"" << favoriteQuote << "\"" << std::endl;

    return 0;
}
